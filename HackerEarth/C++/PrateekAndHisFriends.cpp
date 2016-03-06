#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	int test,size,flag;
	long int cost,tempcost;
	cin >> test;
	while(test--)
	{
		cin >> size >> cost ;
		tempcost = 0;
		flag = 0;
		int gifts[size];
		for(int i=0; i<size; i++) cin >> gifts[i];
		int startpos = 0;
		for(int i=0; i<size; i++)
		{
			tempcost += gifts[i];
			if(tempcost > cost)
			{
				tempcost -= gifts[startpos]; 
				startpos++;
			}
			else if(tempcost == cost)
			{
				flag = 1;
				break;
			}
		}
		if(flag) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}