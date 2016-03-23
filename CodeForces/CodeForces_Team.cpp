#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define TCASE int __T; cin >> __T; FOR(Tc,1,__T)
#define rep(i,n) FOR(i,0,n-1)

int main()
{
    boost;
    int t,s,cnt=0;
    TCASE{
        s=0;
        rep(i,3){
            cin >> t;
            if(t) s++;
        }
        if(s>1) cnt++;
    }
    cout << cnt << endl;
}