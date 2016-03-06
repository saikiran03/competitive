#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define tcase int __TC; cin >> __TC; while(__TC--)

int main(){
    boost;
    int x,y,z;
    double a,b,c;
    tcase{
        cin >> x >> y >> z;
        a = (x+z-y)/2.0;
        b = x-a;
        c = z-a;
        cout << fixed << setprecision(2);
        cout << 2*(a*b + b*c + a*c) << endl;
    }
}
