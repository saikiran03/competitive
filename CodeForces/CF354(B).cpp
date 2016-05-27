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
#define tr(it,x) for(typeof((x).begin()) it=x.begin(); it!=x.end(); it++)
#define all(x) x.begin(), x.end()
#define mems(a,b) memset(a, b, sizeof a)
#define pb push_back
#define mp make_pair
#define sz(a) (int)(sizeof(a))
#define present(a,b) (b.find(a) != b.end())
#define rf freopen("in.txt","r",stdin);
#define wf freopen("out.txt","w",stdout);

const int mod = 1000000007;
const int inf = INT_MAX;
const int pi = acos(-1.0);

int main(){
	boost;
	int n,t;
	cin >> n >> t;
	vector< vector<float> > table(n);
	rep(i,n)
		rep(j,i+1)
			table[i].pb(0);
			
	int sol = 0;
	if(t){
		
		table[0][0] = t;
		rep(i, n-1)
			rep(j, i+1){
				table[i+1][j] += max((double)0, (table[i][j]-1)/2.0);
				table[i+1][j+1] += max((double)0, (table[i][j]-1)/2.0);	
			}
		
		
		rep(i,n)
			rep(j,i+1)
				if(table[i][j]>=1) 
					sol++;
		
		cout << sol << endl;
	}else
		cout << 0 << endl;
}