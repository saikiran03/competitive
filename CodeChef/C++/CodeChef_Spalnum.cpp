#include <iostream>
using namespace std;

int isPalin(num)
{
	int pre,temp = 0;
	pre = num;
	while(num)
	{
		temp += num%10;
		num/=10;
		temp*=10;
	}
	return pre==num;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int test, start, end;
	cin >> test;
	while(test--)
	{
		int sum = 0;
		cin >> start >> end;
		for(int i=start; i<=end; i++) if(isPalin(i)) sum += i;
		cout << sum << endl;
	}
}