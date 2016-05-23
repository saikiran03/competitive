#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> ii;

#define boost ios_base::sync_with_stdio(false); cin.tie(0);
#define tcase int _tc; cin >> _tc; while(_tc--)
#define rep(i,n) for(int i=0; i<n; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)
#define all(x) x.begin(), x.end()
#define mp make_pair
#define pb push_back
#define rf freopen("in.txt","r",stdin);
#define wf freopen("out.txt","w",stdout);

int arr[1005][1005];
ll dp[1005][1005] = {0};

int main(){
	boost;
	// rf; wf;
	int r, c, q;
	cin >> r >> c;
	rep(i,r)
		rep(j,c)
			cin >> arr[i][j];
	
	dp[0][0] = arr[0][0];
	FOR(i,1,r)
		dp[i][0] = dp[i-1][0] + arr[i][0];
		
	FOR(i,1,c)
		dp[0][i] = dp[0][i-1] + arr[0][i];
		
	FOR(i,1,r)
		FOR(j,1,c)
			dp[i][j] = dp[i-1][j] + dp[i][j-1] + arr[i][j] - dp[i-1][j-1];
	
	cin >> q;
	rep(i,q){
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		
		ll sol = dp[c-1][d-1];
		bool f1 = (a>=2);
		bool f2 = (b>=2);
		
		if(f1)
			sol -= dp[a-2][d-1];
		if(f2)
			sol -= dp[c-1][b-2];
		if(f1&f2)
			sol += dp[a-2][b-2];
		
		cout << sol << endl;
	}
}