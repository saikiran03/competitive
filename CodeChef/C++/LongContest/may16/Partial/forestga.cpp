#include <bits/stdc++.h>
using namespace std;

typedef vector<vi> vvi;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> ii;
typedef pair<ll, ll> pll;
typedef vector<ll> vi;
typedef pair<ll , pll> pill;

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
#define F first
#define S second

const int ms = 100005;
pill data[ms];

int main(){
	boost;
	// rf; wf;
	ll l,w,h,r,m,n,p=0;;
	pll f;
	vi t;
	cin >> n >> w >> l;
	rep(i,n){ 
		cin >> h >> r;
		f = mp(h,r);
		m = ceil((float)(l-h)/r);
		data[i] = mp(m,f);
	} 
	h = r = 0; 
	sort(data, data+n);
	rep(i,n){
		h+=data[i].S.F;
		r+=data[i].S.S;
		m = ceil((float)(w-h)/r);
		t.pb(max(data[i].F, m));
	}
	cout << *min_element(all(t)) << endl;
}