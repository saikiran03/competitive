#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int tc,m;
	string name;
	vector<string> arr[100];
	cin >> tc;
	while(tc--){
		cin >> name >> m;
		arr[m-1].push_back(name);
	}
	for(int i=99; i>-1; i--){
		m = arr[i].size();
		sort(arr[i].begin(), arr[i].end());
		for(int j=0; j<m; j++) cout << arr[i][j] << " " << i+1 << endl;
	}
}