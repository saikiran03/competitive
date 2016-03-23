#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef unsigned long long ull;

#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define rep(i,n) FOR(i,0,n-1)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)
#define pb(x) push_back(x)
#define tcase int __t; cin >> __t; rep(__IT, __t)

int main(){
	boost;
	tcase{
		int t,n,cnt=0;
		cin >> n;
		int food[1000005] = {0};
		rep(i,n){
			cin >> t;
			food[t]++;
			cin >> t;
			if(food[t]==0) cnt++;
			else food[t]--;
		}
		cout << cnt << endl;
	}
	return 0;
}
		