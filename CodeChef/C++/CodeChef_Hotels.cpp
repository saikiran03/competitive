#include <iostream>
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
		
		int arr[size], dep[size], maxTime=0;
		for(int i=0; i<size; i++) cin >> arr[i];
		for(int i=0; i<size; i++)
		{
			cin >> dep[i];
			if(dep[i]>maxTime) maxTime = dep[i];
		} 
		int time[maxTime] = {0};
		int max=0; 
		for(int i=0; i<size; i++) for(int j=arr[i]; j<dep[i]; j++) time[j-1]++;
		for(int i=0; i<maxTime; i++)
			if(time[i]>max) max = time[i];
		cout << max << endl;
	}
}