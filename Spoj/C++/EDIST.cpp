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
#define min3(x,y,z) min(z, min(x,y))

const int mod = 1000000007;
const int inf = INT_MAX;
const int pi = acos(-1.0);
const int EPS = 1e-9;

int dp[2005][2005];

int editDistance(string sa, string sb, int m, int n){
	rep(i,m+1){
		rep(j,n+1){
			if(i==0)
				dp[i][j] = j;
			else if(j==0)
				dp[i][j] = i;
			else if(sa[i-1] == sb[j-1])
				dp[i][j] = dp[i-1][j-1];
			else
				dp[i][j] = 1 + min3(dp[i][j-1], dp[i-1][j], dp[i-1][j-1]);
		}
	}
	
	return dp[m][n];
}

int main(){
	boost;
	// rf; //wf;
	tcase{
		mems(dp, 0);
		string sa, sb;
		cin >> sa >> sb;
		cout << editDistance(sa, sb, sa.length(), sb.length()) << endl;
	}
}