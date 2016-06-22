#include <bits/stdc++.h>
using namespace std;

#define inf 1000000007

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef pair<int,int> ii;

#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define tcase int __T; cin >> __T; while(__T--)
#define rep(i,n) for(int i=0; i<n; i++)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)
#define pb push_back
#define all(x) x.begin(),x.end()

int arr_xor(vi::iterator a, vi::iterator b){
	int res = *a;
	a++;
	for(vi::iterator it=a; it!=b; it++) res = res ^ *it;
	return res;
}

int main(){
	boost;
	int n, t, x;
	bool flag;
	vi::iterator it, tmp;
	tcase{
		vi b;
		cin >> n;
		rep(i,n){
			cin >> t;
			b.pb(t);
		}
		flag = false;
		t = arr_xor(b.begin(), b.end());
		while(t){
			flag = !(flag);
			it = b.begin();
			tmp = b.end();
			while(it!=tmp && (*it^t)==0) it++;
			if(it!=tmp){
				t = *it^t;
				b.erase(it);
			}else{
				break;
			}
		}
		if(! flag) cout << "First" << endl;
		else cout << "Second" << endl;
		
	}	
}