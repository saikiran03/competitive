#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;

#define boost ios_base::sync_with_stdio(false); cin.tie(0);
#define tcase int _tc; cin >> _tc; while(_tc--)
#define rep(i,n) for(int i=0; i<n; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)
#define mems(c,x) memset(c, x, sizeof c)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x.size())
#define present(x,c) (c.find(x) != c.end())
#define cpresent(x,c) (find(all(c), x) != c.end())
#define rf freopen("in.txt", "r", stdin);
#define wf freopen("out.txt", "w", stdout);
#define mp make_pair
#define pb push_back
#define fs first
#define se second

const int mod = 1000000007;
const int inf = INT_MAX;
const double pi = acos(-1.0);
const double EPS = 1e-9;
const int N = 1005;

ll a,b,d,C[N];
ll dp[N][N];

ll minCost(int p, int f, int n){
    if(dp[p][f]!=-1)
        return dp[p][f];

    if(f==n)
        return 0;
    else{
        ll bk = (f-p)*b + (f+1-p)*C[n-f]+d + minCost(f+1, f+1, n);
    	ll ct = (f-p)*b + (f+1-p)*b + minCost(p, f+1, n);
    	return dp[p][f] = min(bk, ct); 
    }
}

int main() {
    boost;
    cin >> a >> b >> d;
    rep(i,a+1)
        cin >> C[i];
    mems(dp, -1);
    cout << minCost(0,0,a) << endl;
}