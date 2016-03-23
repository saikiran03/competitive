#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int test, num;
	cin >> test;
	while(test--)
	{
		cin >> num;
		if(num%4==1) cout << "ALICE" << endl;
		else cout << "BOB" << endl;
	}
}