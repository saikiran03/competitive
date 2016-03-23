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
#define pb push_back
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)
 
int main()
{
    boost;
    string exp;
    vi arr;
    cin >> exp;
    int a,n=exp.length();
    a=0;
    rep(i,n){
        if(exp[i]-'0'<0){
            arr.pb(a);
            a=0;
        }
        else{
            a*=10;
            a+=(exp[i]-'0');
        }
    }
    if(a) arr.pb(a);
    sort(arr.begin(),arr.end());
    a = arr.size();
    rep(i,a-1) cout << arr[i] << "+";
    cout << arr[a-1] << endl;
}