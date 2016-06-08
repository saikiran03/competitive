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
const int EPS = 1e-9;

int matrix[1005][1005];

int main(){
	boost;
	
	int n,m, a,b, q;
	cin >> n >> m;
	
	rep(i,n)
		rep(j,m)
			cin >> matrix[i][j];
	
	cin >> q;
	rep(ix,q){
		cin >> a >> b;
		
		if(a==1 && b==1)
			cout << 0 << endl;
		else{
			int sol = inf;
			rep(i,n-a+1){
				rep(j,m-b+1){
					int mab = -inf;
					rep(ia, a)
						rep(ib, b)
							mab = max(matrix[i+ia][j+ib], mab);
					
					int d = 0;		
					rep(ia, a)
						rep(ib, b)
							d += (mab-matrix[i+ia][j+ib]);
					sol = min(sol, d);
				}
			}
			
			cout << sol << endl;
		}
	}
}