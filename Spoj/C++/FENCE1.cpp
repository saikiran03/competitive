#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int l;
	cin >> l;
	while(l!=0)
	{
		cout << setprecision(2) << fixed << l*l/(2*3.141592) << endl;
		cin >> l;
	}
}