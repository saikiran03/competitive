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
const int lm = 13;

ii a[25], b[25];
int d[25][25];
int dp[(1<<lm)+5][(1<<lm)+5];

void calcDist(int n){
	rep(i,n)
		rep(j,n)
			d[i][j] = abs(b[j].Se-a[i].Se) + abs(b[j].Fs-a[i].Fs);
	return;
}

int MinMatching(int n, int mask1, int mask2){
	if(mask1 == (1<<n)-1)
		return 0;

	if(dp[mask1][mask2]!=-1)
		return dp[mask1][mask2];

	int p, q, ans = inf;
	for(p=0; p<n; p++){
		if(!(1 & (mask1 >> p)))
			break;
	}
	for(q=0; q<n; q++){
		if(!(1 & (mask2 >> q))){
			ans = min(ans, d[p][q] + MinMatching(n, mask1 | (1<<p), mask2 | (1<<q) ));
		}
	}

	return dp[mask1][mask2] = ans;
}

int main(){
	boost;
	int n;
	mems(dp, -1);

	cin >> n;
	rep(i,n)
		cin >> a[i].Fs >> a[i].Se;
	rep(i,n)
		cin >> b[i].Fs >> b[i].Se;

	calcDist(n);
	cout << MinMatching(n,0,0) << endl;
}
