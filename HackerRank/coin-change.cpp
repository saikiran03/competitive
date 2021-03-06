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

int coins[1005];
int dp[1005][1005];

ll numberOfWays(int f, int n, int m){
	
	if(n<0)
		return -inf;
	
	if(n==0)
		return 1;
		
	if(dp[n][f]!=-1)
		return dp[n][f];
		
	ll sol = 0;
	for(int i=f; i<m; i++)
		sol += max( (ll)0, numberOfWays(i, n-coins[i], m) );
	
	return dp[n][f] = sol;
}

int main(){
	boost;
	// rf; wf;
	
	int n,m;
	cin >> n >> m;
	
	rep(i,m)
		cin >> coins[i];
		
	mems(dp, -1);
	cout << numberOfWays(0, n, m) << endl;
}