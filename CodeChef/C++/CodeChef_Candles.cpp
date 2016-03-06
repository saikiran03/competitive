#include <iostream>
#include <algorithm>
using namespace std;

#define FOR(i,n) for(int i=0; i<n; i++)
#define print(arr,n) FOR(i,n) cout << arr[i] << " "; cout << endl;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int tc,arr[10];
	cin >> tc;
	while(tc--){
		int age = 0;
		FOR(i,10) cin >> arr[i];
		auto iter = min_element(arr,arr+10);
		if(iter-arr == 0){
			int tmp = 1;
			while(!arr[tmp]) tmp++;
			age += tmp;
			arr[tmp]--;
		}
		else{
			age += iter-arr;
			arr[iter-arr]--;
		}
		cout << iter-arr << endl;
		while(arr[iter-arr]!=-1){
			iter = min_element(arr,arr+10);
			age *= 10;
			age += (iter-arr);
			arr[iter-arr]--;
		}
		cout << age << endl;
	}
}