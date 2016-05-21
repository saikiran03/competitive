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
 
int dp[5005], arr[5005];
 
ull solve(int n){
 
	ull m = 0, s = 1, tp;
	int t;
 
	FOR(i,1,n-1){
		t = arr[i-1]*10 + arr[i];
		if(t>0 && t<27){
			if(arr[i]){
				tp = s;
				s = s+m;
				m = tp;
			}
			else{
				m = s;
				s = 0;
			}	
		}else{
			s = s+m;
			m = 0;
		}
	}
 
	return s+m;
}
 
int main(){
	boost;
	string s; int l;
	cin >> s;
 
	while(s[0]-'0'){
		memset(dp, -1, sizeof dp);
		l = s.length();
		rep(i,l)
			arr[i] = s[i]-'0';
 
		cout << solve(l) << endl;
		cin >> s;
	}
}