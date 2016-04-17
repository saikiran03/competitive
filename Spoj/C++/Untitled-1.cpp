#include <bits/stdc++.h>
using namespace std;

#define inf 1000000007;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef pair<int,int> ii;

#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define tcase int __T; cin >> __T; while(__T--)
#define rep(i,n) for(int i=0; i<n; i++)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)
#define pb push_back
#define all(x) x.begin(),x.end()
#define DBG(x) cout << x << endl;
#define DBG2(x,y) cout << x << " " << y << endl;
#define DBG3(x,y,z) cout << x << " " << y << " " << z << endl;

int arr[100005];
ll a,b,c,d, fibs[2];

void fast_fib(ll n,ll fibs[])
{
    if(n == 0){
        fibs[0] = 0;
        fibs[1] = 1;
        return;
    }
    fast_fib((n/2),fibs);
    a = fibs[0];             /* F(n) */
    b = fibs[1];             /* F(n+1) */
    c = 2*b - a;
    if(c < 0)
        c += inf;
    c = (a * c) % inf;      /* F(2n) */
    d = (a*a + b*b) % inf;  /* F(2n + 1) */
    if(n%2 == 0) {
        fibs[0] = c;
        fibs[1] = d;
    }else{
        fibs[0] = d;
        fibs[1] = c+d;
    }
	return;
}

int main(){
	boost;
	int n,m,x,y,t;
	char c;
	cin >> n >> m;
	rep(i,n) cin >> arr[i];
	rep(i,m){
		cin >> c >> x >> y;
		if(c=='C'){
			arr[x-1] = y;
		}else{
			bitset<1000> b;
			ull sol=0;
			ull p = pow(2,y-x+1);
			FOR(j,1,p){
				b = j; t = 0;
				rep(k,log2(p)){
					if(b[k]) t+= arr[k];
					cout << b[k] << ',';
				}
				cout << endl;
				fast_fib(t,fibs);
				sol = (sol+fibs[0])%inf;
			}
			cout << sol << endl;
		}
	}
}