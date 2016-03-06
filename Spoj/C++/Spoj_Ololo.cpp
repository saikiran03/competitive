#include <bits/stdc++.h>
using namespace std;
#define FOR(i,n) for(int i=0; i<n; i++)

int main(){
	int tc,prev,flag;
	cin >> tc;
	int arr[tc];
	FOR(i,tc) cin >> arr[i];
	sort(arr,arr+tc);
	prev = arr[0];
	flag = 0;
	FOR(i,tc-1){
		if(prev==arr[i]) flag++;
		else{
			if(flag==1) break;
			prev = arr[i];
			flag = 0;
		}
	}
	if(flag==1) cout << prev << endl;
}