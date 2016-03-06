#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define rep(i,n) FOR(i,0,n-1)

int main()
{
    boost;
    int t,n,k,res=0;
    cin >> n >> k;
    rep(i,n){
        cin >> t;
        if(i<k && t>0){
            res++;
            cutoff = t;
        }
        else if(i>k && t==cutoff) res++;
    }
    cout << res << endl;
}