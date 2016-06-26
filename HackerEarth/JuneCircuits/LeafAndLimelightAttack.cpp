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
#define FOR(i,a,b) 		for(ll i=a; i<=b; i++)
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

const int mod = 1000000009;
const int inf = INT_MAX;
const double EPS = 1e-9;
const double pi = acos(-1.0);

ll dp[10000005],n;

int main(){
	boost;
	
	mems(dp, -1);
	
	dp[1] = 1; dp[2] = 10;
	FOR(i,3,10000001){
		dp[i] = (ll)i*(4*i-6) + 6;
		dp[i] = (dp[i-2]%mod + dp[i]%mod) % mod;
	}
	
	tcase{
		cin >> n;
		cout << dp[n] << endl;
	}
}