#include <bits/stdc++.h>
using namespace std;
 
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
		int n,t,mx=0;
		map<int,int> hash;
		vi cache;
		cin >> n;
		rep(i,n){
			cin >> t;
			hash[t]++;
			mx = max(mx,hash[t]);
		}
		tr(it,hash) if(it->second==mx) cache.push_back(it->first);
		sort(cache.begin(),cache.end(),greater<int>());
		tr(it,cache) cout << *it << " ";
		cout << endl;
	}
}