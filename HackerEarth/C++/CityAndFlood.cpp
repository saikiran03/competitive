#include <iostream>
using namespace std;

int main()
{
	int n,k,a,b;
	cin >> n;
	cin >> k;
	int arr[n];
	for(int i=0; i<n; i++) arr[i]=i+1;
	while(k--)
	{
		cin >> a >> b;
		arr[b-1] = -1;
	}
	for(int i=0; i<n; i++) if(arr[i]!=-1) k++; 
	cout << k << endl;
}