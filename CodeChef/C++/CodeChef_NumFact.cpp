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
	TCASE{
		int n,r,root,tmp;
		ull sol=1;
		cin >> n;
		int arr[n];
		rep(i,n) cin >> arr[i];
		map<int,int> factors;
		rep(i,n){
			tmp = arr[i];
			root = ceil(sqrt(arr[i]));
			r = 2;
			while(tmp%r==0){
				tmp/=r;
				factors[r]++;
			}
			r++;
			while(root>=r){
				while(tmp%r==0){
					tmp/=r;
					factors[r]++;
				}
				r+=2;
			}
			if(tmp>2) factors[tmp]++;
		}
		tr(it,factors) sol*=(it->second + 1);
		cout << sol << endl;
		factors.clear();
	}
	return 0;
}