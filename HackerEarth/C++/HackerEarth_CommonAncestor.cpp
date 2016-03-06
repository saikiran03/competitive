#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TCASE int __T; cin >> __T; while(__T--)

int main()
{
	boost;
	ull a,b;
	int cnt;
	TCASE{
		cnt=0;
		cin >> a >> b;
		while(a!=b){
			if(a<b) b/=2;
			else a/=2;
		}
		cout << a << endl;
	}	
}
