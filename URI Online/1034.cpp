#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(0);
#define tcase int _tc; cin >> _tc; while(_tc--)
#define rep(i,n) for(int i=0; i<n; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

int inf = 1000000007;
int arr[30], dp[1000005];

int minCubes(int n, int f, int l){
	if(n==0)
		return 0;
	if(n<0)
		return inf;
	
	if(dp[n]!=-1)
		return dp[n];
		
	int sol = inf;
	FOR(i,f,l-1)
		sol = min(sol, minCubes(n-arr[i], i, l));
	return dp[n] = (sol + 1);
}

int main(){
	boost;
	int n,m;
	tcase{
		cin >> n >> m;
		rep(i,n) cin >> arr[i];
		
		memset(dp, -1, sizeof dp);
		sort(arr, arr+n, greater<int>());
		rep(i,n) 
			dp[arr[i]] = 1;
		
		cout << minCubes(m,0,n) << endl;
	}
}