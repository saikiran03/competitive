#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> ii;

#define boost ios_base::sync_with_stdio(false); cin.tie(0);
#define tcase int _tc; cin >> _tc; while(_tc--)
#define rep(i,n) for(int i=0; i<n; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)
#define all(x) x.begin(), x.end()
#define mp make_pair
#define pb push_back
#define rf freopen("in.txt","r",stdin);
#define wf freopen("out.txt","w",stdout);

const int mod = 1000000007;

int amazingness(int a){
	set<int> t;
	vi r;
	int l = log10(a)+1, ans = 0;
	while(a){ r.pb(a%10); a/=10; }
	reverse(all(r));
	rep(i,l){
		int val = 0;
		rep(j,l){
			val ^= r[j];
			if(t.find(val)==t.end()){
				ans += val;
				t.insert(val);
			}
		}
	}
	return ans;
}

int main(){
	boost;
	int l,r,val;
	tcase{
		val = 0;
		cin >> l >> r;
		FOR(i,l,r){
			val = ( val + amazingness(i) ) % mod;
			// cout << i << " " << amazingness(i) << endl;
		}
		cout << val << endl;
	}
}