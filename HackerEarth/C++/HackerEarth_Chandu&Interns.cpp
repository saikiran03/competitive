#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc,n,facs,root;
	cin >> tc; 
	while(tc--){
		facs = 0;
		cin >> n;
		if(n>5){
			root = ceil(sqrt(n));
			for(int i=1; i<=root; i++){ if(n%i==0) if(n/i==i) facs++; else facs+=2; if(facs>=4) break;}
			if(facs<4) cout << "NO" << endl;
			else cout << "YES" << endl;
		}else cout << "NO" << endl;
	}
}