#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if(b) gcd(b,a%b);
	else return a;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int tc,a,b,tmp;
	unsigned long long int r;
	cin >> tc;
	while(tc--)
	{
		cin >> a >> b;
		if(a<b)
		{
			tmp = a;
			a = b;
			b = tmp;
		}
		r = a*b;
		r /= gcd(a,b);
		cout << gcd(a,b) << endl;
		cout << r << endl;
	}
}
