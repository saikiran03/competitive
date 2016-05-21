#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef unsigned long long ull;

#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define rep(i,n) FOR(i,0,n-1)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)
#define tcase int __t; cin >> __t; rep(__iT, __t)

void factorial(int n){
	vi res;
	int s,carry=0;
	res.push_back(1);
	FOR(i,2,n){
		s = res.size();
		rep(j,s){
			carry += res[j]*i;
			res[j] = carry%10;
			carry/=10;
		}
		while(carry){
			res.push_back(carry%10);
			carry/=10;
		}
	}
	s = res.size();
	rep(i,s) cout << res[s-i-1];
	cout << endl;
	return;
}

int main(){
	boost;
	tcase{
		int n;
		cin >> n;
		factorial(n); 
	}
}