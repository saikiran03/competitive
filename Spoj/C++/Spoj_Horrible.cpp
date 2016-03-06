#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int tc,s,qr,t,p,q,n;
	long long int sum;
	cin >> tc;
	while(tc--)
	{
		cin >> s >> qr;
		int arr[s] = {0};
		while(qr--)
		{
			cin >> t >> p >> q;
			if(t==0)
			{
				cin >> n;
				for(int i=p; i<=q; i++) arr[i] += n;
			}
			else
			{
				sum = 0;
				for(int i=p; i<=q; i++) sum += arr[i];
				cout << sum << endl;
			}
		}
	}
}
