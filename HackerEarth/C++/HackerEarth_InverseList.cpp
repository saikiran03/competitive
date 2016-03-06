#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int tc,n,flag;
	cin >> tc;
	while(tc--){
		cin >> n;
		flag=1;
		int arr[n],brr[n],crr[n];
		for(int i=0; i<n; i++) cin >> arr[i];
		for(int i=0; i<n && flag; i++) if((i+1)!=arr[arr[i]-1]) flag=0;
		if(flag) cout << "inverse" << endl;
		else cout << "not inverse" << endl;
	}
}