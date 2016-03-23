#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define tcase int tc; cin >> tc; while(tc--)
#define rep(i,n) for(int i=0; i<n; i++)

int main(){
    boost;
    string input;
    int up,lp,l,t;
    tcase{
        cin >> input;
        up=lp=0;
        l = input.length();
        rep(i,l){
            t = input[i]-'A';
            if(t<26 && t>=0) up++;
            t = input[i]-'a';
            if(t<26 && t>=0) lp++;
        }
        if(up==0 && lp==0 || l>100) cout << "Invalid Input" << endl;
        else{
            if(lp==0 || up==0) cout << 0 << endl;
            else cout << min(lp,up) << endl;
        }
    }
}
