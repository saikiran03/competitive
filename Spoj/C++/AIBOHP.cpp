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

int dp[6105][6105];

int lcs(string a, string b){
	int l1, l2;
	l1 = a.length();
	l2 = b.length();
	rep(i,l1) dp[i][0] = 0;
	rep(i,l2) dp[0][i] = 0;
	FOR(i,1,l1){
		FOR(j,1,l2){
			if(a[i-1]==b[j-1]){
				dp[i][j] = dp[i-1][j-1] + 1;
			}else{
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}
	return dp[l1][l2];
}

int main(){
	boost;
	string a,b;
	tcase{
		cin >> a; b = a;
		reverse(all(b));
		cout << a.length()-lcs(a,b) << endl;
	}
}