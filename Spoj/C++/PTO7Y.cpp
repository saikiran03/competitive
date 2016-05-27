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

int nodes[10005];
vvi edges(10005);

bool dfs(int root){
	stack<int> sc;
	sc.push(root);
	while(!sc.empty()){
		int v = sc.top();
		sc.pop();
		if(nodes[v]==0){
			nodes[v] = 1;
			tr(it, edges[v])
				sc.push(*it);
		}
		else
			return false;
	}
	return true;
}

int main(){
	boost;
	int v, e, S, E;
	cin >> v >> e;
	rep(i,e){
		cin >> S >> E;
		edges[S-1].pb(E-1);
	}
	if(e!=v-1)
		cout << "NO" << endl;
	else{
		if(dfs(0)){
			bool flag = true;
			rep(i,v)
				if(!nodes[i]){
					flag = false;
					break;
				}
			if(flag)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		else
			cout << "NO" << endl;
	}
}