#include <bits/stdc++.h>
using namespace std;
#define FOR(i,n) for(int i=0; i<n; i++)

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int tc;
	double n,tmp;
	cin >> tc;
	while(tc--){
		cin >> n;
		tmp = 0;
		FOR(i,n) tmp += n/(n-i);
		cout << setprecision(2) << tmp << endl;
	}
}