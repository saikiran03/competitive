#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int tc,size,a1,b1;
	long long int a,b;
	cin >> tc;
	while(tc--)
	{
		cin >> size >> a >> b;
		a1=b1=0; 
		for(int t=a; t>0; t/=2) if(t%2) a1++;
		for(int t=b; t>0; t/=2) if(t%2) b1++;
		long long int tmp,ans=1;
		tmp = 1;
		a1 = abs(a1+b1-size);
		for(int i=0; i<size; i++) ans*=2;
		for(int i=0; i<a1; i++) tmp*=2;
		cout << ans-tmp << endl;
	}
}