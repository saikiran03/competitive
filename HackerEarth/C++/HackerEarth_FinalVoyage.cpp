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
#define tr(it,x) for(typeof((x).begin()) it=x.begin(); it!=x.end(); it++)
#define all(x) x.begin(), x.end()
#define mems(a,b) memset(a, b, sizeof a)
#define pb push_back
#define mp make_pair
#define sz(a) (int)(sizeof(a))
#define present(a,b) (b.find(a) != b.end())
#define rf freopen("in.txt","r",stdin);
#define wf freopen("out.txt","w",stdout);

const int mod = 1000000007;
const int inf = INT_MAX;
const int pi = acos(-1.0);

struct item{
	int w, v;
};
typedef item ammo;

ammo items[1005];
int dp[1005][1005];

int getMaxAmmo(int w, int f, int n){

	if(w<0)
		return -inf;
	else if(w==0)
		return 0;
	
	if(f==n)
		return 0;
		
	if(dp[f][w]!=-1)
		return dp[f][w];
		
	int cons = getMaxAmmo(w, f+1, n);
	int dcons = items[f].v + getMaxAmmo(w-items[f].w, f+1, n);
	
	return dp[f][w] = max(0, max(cons, dcons));
}

int main(){
	boost;
	tcase{
		int n,W;
		cin >> n >> W;
		rep(i,n)
			cin >> items[i].w;
		
		rep(i,n)
			cin >> items[i].v;

		mems(dp, -1);	
		cout << getMaxAmmo(W, 0, n) << endl;
	}
}
