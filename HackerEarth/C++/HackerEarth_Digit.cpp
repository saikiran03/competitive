//HackerEarth_Digit.cpp 42points
#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(i,n) for(int i=0; i<n; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define tcase int __TC; cin >> __TC; while(__TC--)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)
#define all(x) (x.begin(),x.end())

int SumOfDigits(long long int a){
    int res=a%10;
    while(a/10) res+=a%10;
    return res;
}

int main(){
    boost;
    long long int a,b,k,t;
    int p,x,y,res=0;
    cin >> a >> b >> x >> y >> k;
    t = a+(k-a%k);
    while(t<=b){
        p=SumOfDigits(t);
        if(p>=x && p<=y) res++;
        t+=k;
    }
    cout << res << endl;
}
