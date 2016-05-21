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
#define dbg(x) cout << x << endl;
#define dbg2(x,y) cout << x << " "; dbg(y);
#define dbg3(x,y,z) cout << x << " "; dbg2(y,z);
#define dbg4(x,y,z,w) cout << x << " " ; dbg3(y,z,w);

const int mod = 1e9+7;
const int ms = 1e6+5;
int tree[4*ms];

int amazingness(int a);

void build(int s, int e, int n){
	if(s==e){
		tree[n] = amazingness(s+1);
		return;
	}
	
	int m = (s+e)/2;
	build(s, m, 2*n);
	build(m+1, e, 2*n+1);
	tree[n] = tree[2*n] + tree[2*n+1];
	tree[n] %= mod;
	return;
}

int query(int s, int e, int l, int r, int n){
	if(s>r || e<l){  return 0;}
	
	if(s<=l && e>=r) return tree[n];
	
	int q1 = query(s, e, l, (l+r)/2, 2*n);
	int q2 = query(s, e, (l+r)/2+1, r, 2*n+1);
	return (q1+q2) % mod;
}

int amazingness(int a)
{
    set<int> s;
    int ans = 0, l=log10(a)+1;
	vi t;
	for(int p=a; p>0; p/=10) t.pb(p%10);
	reverse(all(t));
	for ( int i = 0; i < l; i++ ) {
         int val = 0;
         for ( int j = i; j < l; j++ ) {
            val ^= t[j];  
            if (s.find(val)==s.end()) {
                 ans += val;
				 s.insert(val);
            }
         }
   }
   return ans;
}

int main(){
	boost;
	int n,m;
	int ans = 0;
	build(0,999999,1);
	tcase{
		cin >> n >> m;
		ans = query(n-1,m-1,0,999999,1);
		cout << ans << endl; ans = 0;
	}
}