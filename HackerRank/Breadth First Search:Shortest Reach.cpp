#include <bits/stdc++.h>
using namespace std;

typedef long long 			ll;
typedef unsigned long long 	ull;
typedef vector<int> 		vi;
typedef vector<char> 		vc;
typedef vector<vi> 			vvi;
typedef pair<int,int> 		ii;
typedef map<int,int> 		mii;

#define boost 			ios_base::sync_with_stdio(false); cin.tie(0);
#define tcase 			int _tc; cin >> _tc; while(_tc--)
#define rep(i,n) 		for(int i=0; i<n; i++)
#define FOR(i,a,b) 		for(int i=a; i<=b; i++)
#define RFOR(i,a,b) 	for(int i=b; i>=a; i--)
#define tr(it,x) 		for(auto it = x.begin(); it != x.end(); it++)
#define all(c) 			c.begin(), c.end()
#define mems(c, x) 		memset(c, x, sizeof c)
#define present(c, x) 	(c.find(x) != c.end())
#define cpresent(c,x) 	(find(all(c), x) != c.end())
#define sz(a) 			(int)(a.size())
#define rf 				freopen("in.txt","r",stdin);
#define wf				freopen("out.txt","w",stdout);
#define mp 				make_pair
#define pb				push_back
#define Pb				pop_back
#define Fs 				first
#define Se 				second

const int mod = 1000000007;
const int inf = INT_MAX;
const double EPS = 1e-9;
const double pi = acos(-1.0);

vi adjList[1005];
int a[1005];
int dist[1005];

void bfs(int s){
	queue<int> Q;
	Q.push(s);
	dist[s] = 0;

	while(!Q.empty()){
		int t = Q.front();
		Q.pop();

		tr(it, adjList[t]){
			if(dist[*it] == -1){
				dist[*it] = dist[t] + 6;
				Q.push(*it);
			}
		}
	}
	
	return;
}

int main(){
	boost;
	// rf; wf;
	int n,m,u,v,s;

	tcase{
		cin >> n >> m;

		rep(i,m){
			cin >> u >> v;
			adjList[u].pb(v);
			adjList[v].pb(u);
		}
		cin >> s;

		mems(dist, -1);
		bfs(s);
		
		FOR(i,1,n){
			if(i!=s) cout << dist[i] << " ";
			adjList[i].clear();
		}
		cout << endl;
		
	}
}