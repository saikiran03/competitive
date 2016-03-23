#include <iostream>
#include <string>
using namespace std;

int main()
{
	int tc,size,ans;
	string build;
	cin >> tc;
	while(tc--)
	{
		cin >> size;
		cin >> build;
		ans = size;
		int stat[size]={0};
		for(int i=0; i<size; i++)
		{
			if(build[i]=='1')
			{
				stat[i]=1;
				if(i==0) stat[i+1]=1;
				else if(i==size-1) stat[i-1]=1;
				else
				{
					stat[i+1]=1;
					stat[i-1]=1;
				}
			} 
		}
		for(int i=0; i<size; i++) if(stat[i]==1) ans--;
		cout << ans << endl;
	}
}