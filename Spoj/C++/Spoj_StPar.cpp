#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int tc,tmp,curpos;
	cin >> tc;
	while(tc)
	{
		curpos=1;
		stack<int> trucks;
		for(int i=0; i<tc; i++)
		{
			cin >> tmp;
			trucks.push(tmp);
			while(trucks.size()!=0 && trucks.top()==curpos)
			{
				trucks.pop();
				curpos++;
			}
		}
		if(trucks.size()==0) cout << "yes" << endl;
		else cout << "no" << endl;
		cin >> tc;
	}
}