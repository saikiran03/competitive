#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int test, candles[10], minAge;
	cin >> test;
	while(test--)
	{
		minAge = 0;
		for(int i=0; i<10; i++)  cin >> candles;
		while(find(candles,candles+10,-1)!=-1)
		{
			int minPos ,tmpMin;
			tmpMin = candles[9];
			for(int i=9; i>=0; i--)
			{
				if(tmpMin>=candles[i])
				{
					minPos = i;
					tmpMin = candles[i];
				}
			}
			minAge *= 10;
			minAge += minPos;
			candles[minPos]--;
		}
		cout << minAge << endl;
	}
}