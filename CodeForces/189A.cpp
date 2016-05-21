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
#define min3(a,b,c) min(a, min(b,c))
#define max3(a,b,c) max(a, max(b,c))

int dp[4005];
int n,a,b,c,mn;
	
int fill(int n){
	if(n==0) 
		return 0;
	else if(n<mn)
		return -INT_MAX;
	
	if(dp[n]!=-1) 
		return dp[n];
		
	return dp[n] = 1 + max3(fill(n-a), fill(n-b), fill(n-c));
}

int main(){
	boost;
	cin >> n >> a >> b >> c;
	mn = min3(a,b,c);
	memset(dp, -1, sizeof dp);
	cout << fill(n) << endl;
}