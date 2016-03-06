#include <bits/stdc++.h>
using namespace std;

#define inf 1000000007

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;

#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define TCASE int __T; cin >> __T; FOR(Tc,1,__T)
#define rep(i,n) FOR(i,0,n-1)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)

int main()
{
	boost;
	long long int q,n,m,l,r;
	cin >> n >> m;
	rep(i,m){
		cin >> q;
		l = max(q-n,n+1);
		r = min(q-1,2*n);
		if(l>r) cout << 0 << endl;
		else cout << r-l+1 << endl;
	}
}