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
inline int Pow(int b, int e){ if(e) return b*Pow(b,e-1); return 1; }
 
ull dp[10][10] = {0};
ull getSolution(int n);
 
void fill(){
 
	FOR(i,1,9) 
		dp[0][i] = dp[0][i-1] + i;
 
	FOR(i,1,9){
		ull q = 0;
		int p = Pow(10, i) - 1;
		for(int t=i-1; t>=0; t--){
			q += dp[t][9] + (pow(10,t)-1)*(pow(10,i-t)-1);
		}
 
		dp[i][1] = 9 * (Pow(10, i-1) - 1) + q + 1;
 
		FOR(j,2,9){
			dp[i][j] = dp[i][j-1] + (j-1)*p + dp[i][1] - 1 + j;
			// if(j==2) cout << dp[i][j] << "  " << dp[i][j-1] << " " << (j-1)*p << " " << dp[i][1]-1 << " " << j << endl;
		}
	}
 
	rep(i,10){
		cout << i <<" => ";
		rep(j,10)
			cout << dp[i][j] << " ";
		cout << endl;
	}
	return;
}
 
ull getSolution(int n){
	int len = log10(n)+1;
	ull sol = 0;
 
	for(int i=0; i<len; i++){
		sol += dp[n%10][i];
		n /= 10;
	}
 
	return sol;
}
 
int main(){
	boost;
	// rf; wf;
	int s,e;
	cin >> s >> e;
 
	fill();
	while(s!=-1 && e!=-1){
		long long sol = 0;
 
		FOR(c,s,e){
			int i = c;
			do{ sol += i%10; }while(i/=10);
		}
 
		cout << sol << endl;
		cin >> s >> e;
	}
}