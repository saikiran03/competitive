#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define TCASE int __T; cin >> __T; FOR(Tc,1,__T)
#define rep(i,n) FOR(i,0,n-1)

int main()
{
    boost;
    TCASE{
        string a,b;
        cin >> a >> b;
        int sa,sb;
        int arr[26]={0};
        int brr[26]={0};
        sa=a.length();
        sb=b.length();
        rep(i,sa) arr[a[i]-'a']++;
        rep(i,sb) brr[b[i]-'a']++;
        sa=0;
        rep(i,26) if(arr[i]>0 && brr[i]>0) sa=1;
        if(sa) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}