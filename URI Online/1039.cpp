#include <bits/stdc++.h>
using namespace std;
 
#define boost ios_base::sync_with_stdio(false); cin.tie(0);
 
int main(){
	boost;
	float x1,y1,x2,y2,r1,r2,d;
	while(cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2){
		d = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
		if(d+r2 <= r1)
			cout << "RICO" << endl;
		else
			cout << "MORTO" << endl;
	}
}