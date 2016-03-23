#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int test;
	string lapin;
	cin >> test;
	while(test--)
	{
		cin >> lapin;
		int i,j=0;
		int alpha[26];
		for(i=0; i<26; i++) alpha[i]=0;
		i = lapin.length();
		for(; j<i/2; j++) alpha[lapin[j]-'a']++;
		if(i%2) j++;
		for(; j<i; j++) alpha[lapin[j]-'a']--;
		int flag=1;
		for(int i=0; i<26; i++)
		{
			if(alpha[i]!=0)
			{
				cout << "NO" << endl;
				flag = 0;
				break;
			}
		}
		if(flag) cout << "YES" << endl;
	}
}