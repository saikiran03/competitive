#include <bits/stdc++.h>
using namespace std;

#define FOR(i,n) for(int i=0; i<n; i++)
#define carr(arr,size) FOR(i,size) cout << arr[i] << " "; cout << endl;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n,k,c,tmp;
	cin >> n;
	c = 1;
	while(n!=-1){
		cout << "Case " << c << ":" << endl;
		int cf[n+1];
		long long int res;
		FOR(i,n+1) cin >> cf[i];
		cin >> k;
		FOR(i,k){
			cin >> tmp;
			res = 0;
			FOR(i,n){
				res += cf[i];
				res *= tmp;
			}
			res += cf[n];
			cout << res << endl;
		}
		c++;
		cin >> n;
	}
}