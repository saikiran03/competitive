#include <iostream>
using namespace std;

int main()
{
	int tc,size,tmp;
	cin >> tc;
	while(tc--)
	{
		int sum = 0;
		cin >> size;
		for(int i=0; i<size; i++)
		{
			cin >> tmp;
			sum += tmp;
			sum %= size;
		}
		if(sum%size==0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
