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
    int n,t,to,tw,th,on;
    to=th=tw=on=0;
    cin >> n;
    rep(i,n){
        cin >> t;
        if(t==4) to++;
        if(t==2) tw++;
        if(t==3) th++;
        if(t==1) on++;
    }
    to+=(tw/2);
    tw%=2;
    if(th>on){
        to+=on;
        th-=on;
        on=0;
        to+=tw;
        to+=th;
    }else{
        to+=th;
        on-=th;
        th=0;
        on+=(tw*2);
        tw=0;
        while(on>0){ to++; on-=4; }
    }
    cout << to << endl;
}