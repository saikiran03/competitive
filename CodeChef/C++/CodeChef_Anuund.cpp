#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int test, size, swap;
	cin >> test;
	while(test--)
	{
		cin >> size;
		int list[size];
		for(int i=0; i<size; i++) cin >> list[i];
		sort(list,list+size);
		for(int i=1; i<size; i++)
		{
			if(i%2==0)
			{
				swap = list[i];
				list[i] = list[i-1];
				list[i-1] = swap;
			}
		}
		for(int i=0; i<size; i++) cout << list[i] << " ";
		cout << endl;
	}
}