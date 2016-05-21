#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int tc;
	long long int a,b;
	cin >> tc;
	while(tc--)
	{
		cin >> a >> b;
		if(b)
		{
			a %= 10;
			b %= 4;
			if(b==0) b=4;
			cout << pow(a,b)%10 << endl; 
		}
		else cout << 0 << endl;
	}
}