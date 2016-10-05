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
const int N = 105;

int a[N], dp[N][50005];

int minDiff(int f, int n, int s){
    if(s<0 && f==n)
        return inf;
    
    if(f==n)
        return s;

    if(dp[f][s]!=-1)
        return dp[f][s];

    int cns = minDiff(f+1, n, s+a[f]);
    int dns = minDiff(f+1, n, s-a[f]);
    return dp[f][s] = min(cns, dns);
}

int main() {
    // rf; wf;
    boost;
    tcase{
        // Your code goes here.
        mems(dp, -1);
        int n;
        cin >> n;
        rep(i,n)
            cin >> a[i];
        
        cout << minDiff(0,n,0) << endl;
    }
}