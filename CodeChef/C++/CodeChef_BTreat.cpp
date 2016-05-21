#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc, n;
	long long int ull, moves;
	cin >> tc;
	while(tc--){
		cin >> n;
		ull = 0;
		moves = 0;
		int arr[n];
		for(int i=0; i<n; i++){
			cin >> arr[i];
			ull += arr[i];
		}
		if(ull%n){
			cout << "No Treat" << endl;
		}else{
			ull = ull/n;
			for(int i=0; i<n; i++) moves += abs(arr[i]-ull);
			cout << moves << endl;
		}
	}
}