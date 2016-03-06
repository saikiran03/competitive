#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int test,n,x,y,s;
	cin >> test;
	while(test--)
	{
		cin >> n;
		x = (n/7)*7;
		y = n-x;
		while(y%4 && x>=0)
		{
			x -= 7;
			y = n-x;
		}
		if(x>=0 && y>=0) cout << x << endl;
		else cout << -1 << endl;
	}
}