#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	int palace[n][m];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin >> palace[i][j];
		}
	}
	int queries,num,flag=0;
	cin >> queries;
	while(queries--)
	{
		flag=0;
		cin >> num;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				if(palace[i][j]==num)
				{
					flag=1;
					break;
				}
			}
		}
		if(flag) cout << i << " " << j << endl;
		else cout << -1 << " " << -1 << endl;
	}
}