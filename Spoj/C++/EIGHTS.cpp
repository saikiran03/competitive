#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int tc;
	unsigned long long int k;
	cin >> tc;
	while(tc--)
	{
		cin >> k;
		cout << 192+(k-1)*250 << endl;
	}
}