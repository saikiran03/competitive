#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef unsigned long long ull;
typedef map<int,int> mii;
typedef pair<int,int> ii;

#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define rep(i,n) FOR(i,0,n-1)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)
#define tcase int __t; cin >> __t; rep(__iT, __t)

int main(){
	boost;
	int n,m;
	ii keys, vals;
	map<ii,ii> table;
	cin >> n >> m;
	rep(i,n){
		cin >> keys.first >> keys.second >> vals.first >> vals.second;
		if(vals.second>=table[keys].second) table[keys] = vals;
	}
	rep(i,m){
		cin >> keys.first >> keys.second;
		cout << table[keys].first << endl;
	}
}		