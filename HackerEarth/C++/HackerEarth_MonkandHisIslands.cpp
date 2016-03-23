#include <bits/stdc++.h>
using namespace std;

class Graph{
	int V;
	vector<int> *adj;
	public:
		Graph(int V);
		void addEdge(int v, int w);
		int BFS(int s, int n);
};

Graph::Graph(int V){
	this->V = V;
	adj = new vector<int>[V];
}

void Graph::addEdge(int v, int w){
	adj[v].push_back(w);
	adj[w].push_back(v);
}

int Graph::BFS(int s, int f){
	int fs,depth = 0;
	int visited[V];
	for(int i=0; i<V; i++) visited[i] = 0;
	queue<int> q;
	visited[s] = 1;
	q.push(s);
	fs = s;
	vector<int>::iterator it;
	while(!q.empty()){
		s = q.front();
		q.pop();
		for(it=adj[s].begin(); it!=adj[s].end(); it++){
			if(!visited[*it]){
				visited[*it] = visited[s]+1;
				if(*it==f) return visited[i]-1;
				q.push(*it);
			}
		}
		depth++;
	}
}

int main(){
	int tc, n, m, u, v;
	cin >> 	tc;
	while(tc--){
		cin >> n >> m;
		Graph g(n);
		for(int i=0; i<m; i++){
			cin >> u >> v;
			g.addEdge(u-1, v-1);
		}
		cout << g.BFS(0, n-1) << endl;
	}
}