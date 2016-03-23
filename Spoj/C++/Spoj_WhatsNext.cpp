#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int a,b,c;
	cin >> a >> b >> c;
	while(a!=0 || b!=0 || c!=0)
	{
		if(b-a == c-b)
		{
			cout << "AP "; 
			cout << c+b-a << endl;
		}
		if(float(b)/a == float(c)/b)
		{
			cout << "GP ";
			cout << c*(float(c)/b) << endl;
		}
		cin >> a >> b >> c;
	}
}