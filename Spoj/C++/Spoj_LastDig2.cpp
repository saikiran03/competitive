#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int tc;
	long long int a,b;
	string num;
	cin >> tc;
	while(tc--)
	{
		cin >> num;
		cin >> b;
		a = num[num.length()-1]-'0';
		if(b)
		{
			a %= 10;
			b %= 4;
			if(b==0) b=4;
			b = pow(a,b);
			cout << b%10 << endl; 
		}
		else cout << 1 << endl;
	}
}