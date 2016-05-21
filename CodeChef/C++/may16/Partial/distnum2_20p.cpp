// 20 points solution

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
 
const int ms = 100005;
const int inf = INT_MAX;
int arr[ms], tree[4*ms];
 
void build(int s, int e, int n){
	if(s==e){
		tree[n] = arr[s];
		return ;
	}
 
	int m = (s+e)/2;
	build(s, m, 2*n);
	build(m+1, e, 2*n+1);
	tree[n] = min(tree[2*n], tree[2*n+1]);
	return;
}
 
int query(int s, int e, int l, int r, int n){
	if(s>r || e<l || l>r) 
		return inf;
	else if(s<=l && e>=r) 
		return tree[n];
 
	int m = (l+r)/2;
	int u = query(s,e,l,m,2*n);
	int t = query(s,e,m+1,r,2*n+1);
	return min(u, t);
}
 
int main(){
	boost;
	// rf; wf;
	int n,q,a,b,c,d,k,l,r,ans=0;
	cin >> n >> q;
	rep(i,n) cin >> arr[i];
	build(0,n-1,1);
	rep(i,q){
		cin >> a >> b >> c >> d >> k;
		l = (a*max(ans,0) + b)%n;
		r = (c*max(ans,0) + d)%n;
		if(k==1) ans = query(l,r,0,n-1,1);
		else ans = -1;
		cout << ans << endl;
	}
}