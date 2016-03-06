#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int tc,tmp,r,limit,flag;
	long int num;
	cin >> tc;
	while(tc--){
		cin >> num;
		flag =0;
		limit = ceil(sqrt(num));
		for(int i=0; i<limit; i++){
			tmp = num-(i*i);
			r = sqrt(tmp);
			if(r*r==tmp) {flag=1; break;}
		}
		if(flag) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}