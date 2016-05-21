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

const int mod = 1e9+7;
int ps[1005],re[1005], dp[1005][1005];

//naive recursive solution => 30 points
// void traverse(int s, int i, int m, int n){
// 	if(s<=0 || s>n) return;
// 	if(i==m){
// 		re[s-1] = (re[s-1]+1)%mod;
// 		return;
// 	}
// 	traverse(s+ps[i],i+1,m,n);
// 	traverse(s-ps[i],i+1,m,n);
// 	return;
// }

//solution using dp => 100 points
int fill(int s, int m, int n, int ss){
	// cout << s << " " << m << " " << ps[m] << " " << ss << endl;
	if(s<1 || s>n) return 0;
	
	if(dp[s][m]!=-1) return dp[s][m];
	
	if(m==0){
		if(s==ss) return 1;
		else return dp[s][m] = 0;
	}
	
	int q1 = fill(s+ps[m], m-1, n, ss);
	int q2 = fill(s-ps[m], m-1, n, ss);
	
	return dp[s][m] = (q1+q2)%mod;
}

int main(){
	boost;
	// rf; wf;
	int n,m,s;
	tcase{
		cin >> n >> m >> s;
		rep(i,m) cin >> ps[i+1];
		// memset(re, 0, sizeof re);
		// traverse(s,0,m,n);
		// rep(i,n) cout << re[i] << " "; cout << endl;
		memset(dp, -1, sizeof dp);
		dp[s][0] = 1;
		FOR(i,1,n) cout << fill(i, m, n, s) << " "; cout << endl;
	}
}