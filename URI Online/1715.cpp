#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(i,n) for(int i=0; i<n; i++)

int main(){
	boost;
	int n,m,t;
	bool arr[105];
	while(cin >> n >> m){
		memset(arr, true, sizeof arr);
		rep(i,n)
			rep(j,m){
				cin >> t;
				if(t==0) arr[i]=false;
			}
		cout << count(arr, arr+n, true) << endl;
	}	
}