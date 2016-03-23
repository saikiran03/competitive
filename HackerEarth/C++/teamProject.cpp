#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int test,size;
	cin >> test;
	while(test--)
	{
		cin >> size;
		vector<int> teams;
		int arr[size];
		for(int i=0; i<size; i++) cin >> arr[i];
		sort(arr,arr+size);
		int p=0;
		while(p<size/2)
		{
			teams.push_back(arr[p]+arr[size-p-1]);
			p++;
		}
		int min, max;
		min = teams[0];
		max = min;
		for(int i=0; i<vector.size(); i++)
		{
			if(teams[i]>max) max = teams[i];
			if(teams[i]<min) min = teams[i];
		}
		cout << max-min << endl;
	}
}