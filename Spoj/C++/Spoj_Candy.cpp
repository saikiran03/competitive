#include <iostream>
using namespace std;

int main()
{
	int tc,shift;
	long long int sum;
	cin >> tc;
	while(tc!=-1)
	{
		int arr[tc];
		sum = 0;
		shift = 0;
		for(int i=0; i<tc; i++)
		{
			cin >> arr[i];
			sum += arr[i];
		}
		if(sum%tc) cout << -1 << endl;
		else
		{
			sum /= tc;
			for(int i=0; i<tc; i++) if(arr[i]>sum) shift += arr[i]-sum;
			cout << shift << endl;
		}
		cin >> tc;
	}
}
