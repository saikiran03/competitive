#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int s;
	cin >> s;
	int arr[s];
	for(int i=0; i<s; i++) cin >> arr[i];
	sort(arr,arr+s);
	for(int i=0; i<s; i++) cout << arr[i] << endl;
}