#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int tc;
	long long int n1,n2,m;
	cin >> tc;
	while(tc--){
		cin >> n1 >> n2 >> m;
		m = m*(m+1)/2;
		if(n1>n2){
			if(n2>m) cout <<  n1+n2-2*m << endl;
			else cout << n1-n2 << endl;
		}else{
			if(n1>m) cout << n1+n2-2*m << endl;
			else cout << n2-n1 << endl;
		}
	}
}