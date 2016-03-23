#include <bits/stdc++.h>
using namespace std;
#define FOR(i,n) for(int i=0; i<n; i++)

int main(){
	int tc,n,m;
	cin >> tc;
	while(tc--){
		cin >> n;
		int a[n],b[n];
		m = 0;
		FOR(i,n) cin >> a[i];
		FOR(i,n) cin >> b[i];
		FOR(i,n){
			for(int j=i; j<n; j++) if(a[i]<=b[i]) m = max(m,j-i);
		}
		cout << m << endl;
	}
}
//occult