#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int tc,k,a,b,flag;
	cin >> tc;
	while(tc--){
		cin >> k;
		b = 1;
		flag = 0;
		while(k--){
			cin >> a;
			if(a>b){
				flag++;
				break;
			}
			b = (b-a)*2;
		}
		if(flag||b) cout << "No" << endl;
		else cout << "Yes" << endl;
	}
}