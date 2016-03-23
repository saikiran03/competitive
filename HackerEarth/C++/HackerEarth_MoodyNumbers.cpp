#include <bits/stdc++.h>
using namespace std;

#define scd(t) scanf("%d",&t)
#define sclld(t) scanf("%lld",&t)
#define prt(txt) printf("%s\n",txt)

int sumSquareDigits(long long int t){
	int r=0;
	t = t*t;
	while(t!=0){ r+=(t%10); t/=10; }
	return r;
}

int main()
{
	int t;
	long long int n;
	bool flag;
	scd(t);
	while(t--){
		sclld(n);
		flag = false;
		while(!flag){
			if(n==1 || n==4) flag=true;
			else if(n==9 || n==16) break;
			n = sumSquareDigits(n);
		}
		if(flag) prt("YES");
		else prt("NO");
	}
}