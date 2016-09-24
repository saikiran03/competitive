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

int mod = 1000000007;
const int inf = INT_MAX;
const double pi = acos(-1.0);
const double EPS = 1e-9;
const int N = 100000005;

inline int mul(int a, int b) { return (int)(((ull)a * (ull)b) % mod); }

vi primes;
bool stat[N];

int mod_pow(int b, int p) {
    if(b%mod==0)
        return 0;
    if(p==0)
        return 1;
    if(p%2)
        return mul(b, mod_pow(mul(b,b), p/2));
    else
        return mod_pow(mul(b,b), p/2);
}

int main() {
    boost;
    
    mems(stat, true);
    for(int i=2; i*i <= N; i++){
        if(stat[i]){
            for(int j=i*i; j<N; j+=i)
                stat[j] = false;
        }
    }
    
    for(int i=2; i<N; i++)
        if(stat[i])
            primes.pb(i);
    
    int n,m;
    tcase{
        // Your code goes here.
        map<int,int> fact;
        cin >> n >> m;
        mod = m;

        // factorize n!
        tr(it, primes){
            if(*it > n)
                break;
            
            int c = *it, pwr = 0;
            while(c <= n){
                pwr += n/c;
                c *= *it;
            }
            fact[*it] = pwr;
        }

        fact[2]--; // (n!/2)
        ull ans = 1, root = 1;
        tr(it, fact) {
            ans = mul(ans, mod_pow(it->first, it->second/2));
            fact[*it] %= 2;

        }


    }
}