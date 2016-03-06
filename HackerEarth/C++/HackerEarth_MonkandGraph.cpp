#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int tc,n,m,tmp;
	vector<int>::iterator p;
	cin >> tc;
	while(tc--)
	{
		cin >> m >> n;
		vector<int> stl;
		for(int i=0; i<m; i++)
		{
			cin >> tmp;
			stl.push_back(tmp);
		}
		sort(stl.begin(),stl.end());
		for(int i=0; i<n; i++)
		{
			cin >> tmp;
			int j=0;
			while(stl[j]<tmp) j++;
			if(stl[j]==tmp) cout << "YES" << endl;
			else cout << "NO" << endl;
			stl.push_back(tmp);
			sort(stl.begin(),stl.end());
		}
	}
}