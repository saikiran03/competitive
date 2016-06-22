// 10 points solution

#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> ii;
typedef vi::iterator vit;
 
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
#define DBG_VEC(x) tr(it,x) cout << *it << " "; cout << endl;
 
const int MAX = 100005;
int arr[MAX];
vi tree[4*MAX];
vi nil;
 
vi Merge(vit a, vit b, vit e, vit f){
	vi r(b-a + f-e);
	merge(a,b,e,f,r.begin());
	vit it = unique(all(r));
	r.resize( distance(r.begin() ,it) );
	return r;
}
 
void build(int s, int e, int n){
	if(s==e){
		tree[n].pb(arr[s]);
		return;
	}
 
	int m = (s+e)/2;
	build(s, m, 2*n);
	build(m+1, e, 2*n+1);
	tree[n] = Merge(all(tree[2*n]), all(tree[2*n+1]));
	return;
}
 
vi query(int s, int e, int l, int r, int n){
	if(s>r || e<l || l>r) return nil;
	if(s<=l && e>=r) return tree[n];
 
	int m = (l+r)/2;
	vi t = query(s, e, l, m, 2*n);
	vi u = query(s, e, m+1, r, 2*n+1);
	return Merge( all(t), all(u));
}
 
int main(){
	boost;
	int n,q,a,b,c,d,k,l,r,pa=0;
	vi s;
	cin >> n >> q;
	rep(i,n) cin >> arr[i];
	build(0,n-1,1);
	rep(i,q){
		cin >> a >> b >> c >> d >> k;
		l = (a*max(pa,0) + b)%n;
		r = (c*max(pa,0) + d)%n;
		if(l>r) swap(l,r);
		s = query(l,r,0,n-1,1);
		if(k > s.size()) pa=-1;
		else pa = s[k-1];
		cout << pa << endl;
	}
}