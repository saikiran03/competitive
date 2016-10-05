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

int a[N], b[N], c[N];
inline bool compare(ii a, ii b){ return (a.fs/a.se) > (b.fs/b.se); }

int main() {
    boost;
    int n,m, rm, dm=0, mm = 0;
    vii dt; ii p;
    cin >> n >> m;
    rm = m*n;
    rep(i,n){
        cin >> a[i] >> b[i] >> c[i];
        dm += a[i];
        mm += b[i];
        p = mp((b[i]-a[i]), (b[i]-a[i])/c[i]);
        dt.pb(p);
    }
    if(mm<rm)
        cout << -1 << endl;
    else{
        rm -= dm;
        sort(all(dt), compare);
        int hrs = 0;
        tr(it, dt){
            if(rm<=0)
                break;
            int ci = (it->fs)/(it->se);
            if(rm/ci > it->se){
                hrs += it->se;
                rm -= it->fs;
            }else{
                hrs += rm/ci;
                rm -= (rm/ci)*ci;
            }
        }
        cout << hrs << endl;
    }
}