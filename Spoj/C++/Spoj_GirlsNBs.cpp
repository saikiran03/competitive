#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	int b,g,mg;
	double t;
	cin >> b >> g;
	while(b!=-1 && g!=-1){
		mg = min(b,g);
		if(b || g){
			t = max(b,g)/(mg+1);
			mg = ceil(t);
			cout << max(mg,1) << endl;
		}else cout << 0 << endl;
		cin >> b >> g;
	}
}