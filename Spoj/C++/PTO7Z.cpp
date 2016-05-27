#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef map<int,int> mpii;

#define boost ios_base::sync_with_stdio(false); cin.tie(0);
#define tcase int _tc; cin >> _tc; while(_tc--)
#define rep(i,n) for(int i=0; i<n; i++)
#define repr(i,n) for(int i=n; i>=0; i--)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define RFOR(i,a,b) for(int i=a; i>=b; i--)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)
#define all(x) x.begin(), x.end()
#define mems(a,b) memset(a, (b), sizeof a)
#define mp make_pair
#define pb push_back
#define sz(a) (int)(a.size())
#define present(c,x) (c.find(x)!=c.end())
#define cpresent(c,x) (find(all(c),x) != c.end())
#define rf freopen("in.txt","r",stdin);
#define wf freopen("out.txt","w",stdout);

const int mod = 1000000007;
const int inf = INT_MAX;
const int pi = acos(-1.0);
const int EPS = 1e-9;

int visited[10005];
vvi edges(10005);

ii deepestNode(int s){
	ii dN = mp(s,0);
	stack<ii> sc;
	sc.push(dN);
	
	while(!sc.empty()){
		ii v = sc.top();
		sc.pop();
		
		if(v.second >= dN.second)
			dN = v;
		
		if(visited[v.first]==0){
			visited[v.first] = 1;
			tr(it, edges[v.first])
				sc.push( mp(*it, v.second+1) );
		}
	}
	
	return dN;
}

int main(){
	boost;
	int s,e,v;
	cin >> v;
	rep(i,v-1){
		cin >> s >> e;
		edges[s-1].pb(e-1);
		edges[e-1].pb(s-1);
	}
	
	mems(visited, 0);
	int fn = deepestNode(0).first;
	
	mems(visited, 0);
	cout << deepestNode(fn).second << endl;
}