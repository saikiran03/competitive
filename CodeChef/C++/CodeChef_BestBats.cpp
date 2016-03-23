#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

long long int ncr(int n, int r)
{
	long long int res = 1;
	int a, b;
	if(r>n-r){ a = n-r; b = r; }
	else{ a = r; b = n-r; }
	for(int i=n; i>b; i--) res*=i;
	for(int i=a; i>0; i--) res/=i;
	return res;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int test,length;
	cin >> test;
	while(test--)
	{
		int count,end,mid,scores[11];
		for(int i=0; i<11; i++) cin >> scores[i];
		cin >> length;
		sort(scores,scores+11);
		mid = 11-length-1;
		count = 0;
		for(int i=0; i<11; i++) if(scores[i]==scores[mid]){ end = i; count++; }
		cout << ncr(count,end-mid) << endl;
	}
}