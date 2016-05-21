//segment trees implementation
#include <bits/stdc++.h>
using namespace std;

#define inf 1000000007

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef pair<int,int> ii;

#define rf freopen("in.txt","r",stdin);
#define wf freopen("out.txt","w",stdout);
#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define tcase int __T; cin >> __T; while(__T--)
#define rep(i,n) for(int i=0; i<n; i++)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)
#define pb push_back
#define all(x) x.begin(),x.end()

struct node{
	int mx;
	ull sm;
};
typedef node node;

int arr[50005];
ull sol= -inf;
node tree[4*50005];

void build(int s,int e,int n){
	if(s==e){ tree[n].mx = arr[s]; }
	else{
		int m = (s+e)/2;
		build(s,m,2*n);
		build(m+1,e,2*n+1);
		tree[n].mx = max(tree[2*n].mx, tree[2*n+1].mx);
		tree[n].sm = tree[2*n].sm + tree[2*n+1].sm;
	}
	return;
}

ull query(int l,int r,int s,int e,int n){
	if(s>r || e<l){ return 0;}
	if(s>=l && e<=r){ sol = max(sol, tree[n].sm); return tree[n].sm;}
	int q1 = query(l, r, s, (s+e)/2, 2*n);
	int q2 = query(l, r, (s+e)/2+1, e, 2*n+1);
	sol = max(sol,(ull)(q1+q2));
	return sol;
}

int main(){
	boost;
	int n,q,x,y;
	cin >> n;
	rep(i,n) cin >> arr[i];
	cin >> q;
	build(0,n-1,1);
	rep(i,n-1) FOR(j,i+1,n-1) cout << i << " " << j << " " << query(i,j,0,n-1,1) << endl;
	rep(i,q){
		cin >> x >> y;
		cout << query(x,y,0,n-1,1) << endl;
	}
}