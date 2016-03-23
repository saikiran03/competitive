#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define TCASE int __T; cin >> __T; FOR(Tc,1,__T)
#define rep(i,n) FOR(i,0,n-1)

int main()
{
    boost;
    ull g,n;
    TCASE{
        cin >> g >> n;
        rep(i,n) cout << (i+2)*(g) << " ";
        cout << endl;
    }
}