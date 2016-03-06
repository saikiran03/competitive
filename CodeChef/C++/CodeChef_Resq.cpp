#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int tc;
	cin >> tc;
	while(tc--)
	{
		int n,j,i,d;
		cin >> n;
		j = (int)sqrt(n);
		for(i=j; i>0; i--)
		{
			if(n%i==0) break;
		}
		cout << (int)fabs(n/i-i) << endl;
	}
}

