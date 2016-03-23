#include <bits/stdc++.h>
using namespace std;

#define inf 1000000007

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;

#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define TCASE int __T; cin >> __T; FOR(Tc,1,__T)
#define rep(i,n) FOR(i,0,n-1)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)

int main()
{
    boost;
    TCASE{
        int n,t,mn=0,mx=0,cnt=0;
        cin >> n;
        rep(i,n){
            cin >> t;
            mn += max(0,t-1);
            if(t) cnt=1;
            mx+=arr[i];
        }
        if(mn+cnt<=100 && mx>=100) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}