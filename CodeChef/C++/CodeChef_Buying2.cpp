#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int test, notes, cost, sweets, total;
	cin >> test;
	while(test--)
	{
		cin >> notes >> cost;
		int val[notes];
		total = 0;
		for(int i=0; i<notes; i++)
		{
			cin >> val[i];
			total += val[i];
		} 
		sort(val, val+notes);
		sweets = total/cost;
		int flag = 1;
		for(int i=0; i<notes; i++)
		{
			if((total-val[i])/cost == sweets)
			{
				flag = 0;
				cout << -1 << endl;
				break;
			}
		}
		if(flag) cout << sweets << endl;
	}
}