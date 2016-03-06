#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int test, horses, leastDiff, tmp;
	cin >> test;
	while(test--)
	{
		cin >> horses;
		int skills[horses];
		for(int i=0; i<horses; i++) cin >> skills[i];
		sort(skills,skills+horses);
		leastDiff = skills[1]-skills[0];
		for(int i=0; i<horses-1; i++)
		{
			tmp = (skills[i+1]-skills[i]);
			if(tmp<leastDiff) leastDiff = tmp;
		}
		cout << leastDiff << endl;
	}
}
