#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int tc,n,i;
	cin >> tc;
	while(tc--)
	{
		cin >> n >> i;
		if(i) cout << "Pagfloyd wins." << endl;
		else cout << "Airborne wins." << endl;
	}
}