#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
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
#define Fs first
#define Se second
#define sz(a) (int)(a.size())
#define present(c,x) (c.find(x)!=c.end())
#define cpresent(c,x) (find(all(c),x) != c.end())
#define rf freopen("in.txt","r",stdin);
#define wf freopen("out.txt","w",stdout);

const int mod = 1000000007;
const int inf = INT_MAX;
const int pi = acos(-1.0);
const float EPS = 1e-9;
const int N = 105;

int a[N][N], dis[N][N][2];

vii neighbours(ii node, int l, int n, int m){
	int x = node.Fs;
	int y = node.Se;
	int xl = min(n, x+l);
	int yl = min(m, y+l);
	vii ng;
	
	FOR(i, max(1, x-l), xl)
		FOR(j, max(1, y-l), yl)
			if(a[i][j]==0 && (abs(x-i) + abs(y-j) <= l))
				ng.pb(mp(i,j));
		
	return ng;
}

int main(){
	int n, m, k1, k2, ans;
	
	tcase{
		ans = inf;
		mems(dis, -1);
		cin >> n >> m >> k1 >> k2;
		
		FOR(i,1,n)
			FOR(j,1,m)
				cin >> a[i][j];
		
		queue<ii> q;
		q.push(mp(1,1));
		dis[1][1][0] = 0;
		
		while(!q.empty()){
			ii f = q.front();
			q.pop();
			
			vii x = neighbours(f, k1, n, m);
			int fs, se, s = sz(x);
			rep(i,s){
				fs = x[i].Fs; se = x[i].Se;
				if(dis[fs][se][0] == -1){
					q.push(x[i]);
					dis[fs][se][0] = dis[f.Fs][f.Se][0] + 1;
				}
			}
		}
		
		q.push(mp(1,m));
		dis[1][m][1] = 0;
		
		while(!q.empty()){
			ii f = q.front();
			q.pop();
			
			if(dis[f.Fs][f.Se][0] != -1){
				int cx = max(dis[f.Fs][f.Se][0], dis[f.Fs][f.Se][1]);
				ans = min(ans, cx);
			}
				
			
			vii x = neighbours(f, k2, n, m);
			int fs,se,s = sz(x);
			
			rep(i,s){
				fs = x[i].Fs; se = x[i].Se;
				if(dis[fs][se][1] == -1){
					q.push(x[i]);
					dis[fs][se][1] = dis[f.Fs][f.Se][1] + 1;
				}
			}
		}
		
		cout << (ans==inf ? -1 : ans) << endl;
	}
}