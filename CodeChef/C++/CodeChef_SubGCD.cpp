#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define TCASE int __T; cin >> __T; FOR(Tc,1,__T)
#define rep(i,n) FOR(i,0,n-1)

int gcd(int a, int b){
	if(b) return gcd(b,a%b);
	return a;
}

int main()
{
	boost;
	TCASE{
		int n,g,t;
		cin >> n;
		cin >> g;
		rep(i,n-1){ cin >> t; g=gcd(g,t); }
		if(g==1) cout << n << endl;
		else cout << -1 << endl;
	}
}