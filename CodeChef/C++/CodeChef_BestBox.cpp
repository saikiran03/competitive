#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int tc,p,s;
	cin >> tc;
	double l1,l2,v1,v2;
	while(tc--)
	{
		cin >> p >> s;
		l1 = (p+pow((p*p)-(24*s),0.5))/12.0;
		l2 = (p-pow((p*p)-(24*s),0.5))/12.0;
		v1 = l1*l1*((p-(8*l1))/4.0);
		v2 = l2*l2*((p-(8*l2))/4.0);
		cout << fixed << setprecision(2);
		if(v1>v2) cout << v1 << endl;
		else cout << v2 << endl;
	}
}