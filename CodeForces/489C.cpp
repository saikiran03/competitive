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

int main() {
    boost;
    int m,s,t;
    string h, l, c;
    char cs[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    c = h = l = "";
    
    cin >> m >> s; t=s;
    bool b = (s==0 && m!=1) || (s>9*m);
    if(b)
        cout << -1 << " " << -1 << endl;
    else if(s==0)
        cout << 0 << " " << 0 << endl;
    else{
        rep(i,m){
            h += cs[min(9,s)];
            s -= min(9, s);
        }
        c = h;
        reverse(all(c));
        if(c[0]=='0'){
            // c[0] = '1';
            int li;
            for(li=0; li<m && c[li]=='0'; li++);
            c[li] = cs[ (c[li]-'0') - 1];
            c[0] = '1';
        }
        l = c;

        cout << l << " " << h << endl;
    }
}