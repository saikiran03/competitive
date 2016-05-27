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

struct lead{
	int w, p;
};
typedef lead lead;

lead bullets[55];
int dp[55][105];

int knapsack(int f, int n, int LL){
	
	if(LL<0)
		return -inf;
	
	if(LL==0)
		return 0;	
	
	if(f==n)
		return 0;
	
	if(dp[f][LL]!=-1)
		return dp[f][LL];
	
	int cons = bullets[f].p + knapsack(f+1, n, LL-bullets[f].w);
	int dcons = knapsack(f+1, n, LL);

	return dp[f][LL] = max(cons, dcons);
}

int main(){
	boost;
	int n,k, LL, r;
	lead t;
	tcase{
		cin >> n;
		rep(i,n)
			cin >> bullets[i].p >> bullets[i].w;
		cin >> LL >> r;

		mems(dp, -1);
		int maxPower = knapsack(0, n, LL);
		
		if(maxPower>=r)
			cout << "Missao completada com sucesso" << endl;
		else
			cout << "Falha na missao" << endl;
	}
}
