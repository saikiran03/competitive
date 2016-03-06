#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define rep(i,n) FOR(i,0,n-1)

int main()
{
    boost;
    string data;
    int s=0,t;
    getline(cin,data);
    if(data[data.length()-1]-'k'==0){
        if(data[0]==6 || data[0]==7) cout << 53 << endl;
        else cout << 52 << endl;
    }else{
        rep(i,2){
            t = data[i]-'0';
            if(t>=0 && t<=9){
                s*=10;
                s+=t;
            }
        }
        if(s<30) cout << 12 << endl;
        else if(s==30) cout << 11 << endl;
        else cout << 7 << endl;
    }
}