#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n,deg,sum=0;
	cin >> n;
	for(int i=0; i<n; i++){ cin >> deg; sum+=deg; }
	if(sum/2 == n-1) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}