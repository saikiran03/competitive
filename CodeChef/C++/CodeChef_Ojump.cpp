#include <iostream>
using namespace std;

int main()
{
	unsigned long long int t;
	cin >> t;
	t%=6;
	if(t==0 or t==1 or t==3) cout << "yes" << endl;
	else cout << "no" << endl;
}