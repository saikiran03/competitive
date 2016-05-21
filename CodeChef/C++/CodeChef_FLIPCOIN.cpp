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

const int max_size = 100005; 
// tails = false; heads = true;
bool arr[max_size] = {0};
int tree[4*max_size] = {0},lazy[4*max_size] = {0} ,mt=0;

void build(int s, int e, int n){
	mt = max(n,mt);
	if(s==e){
 		tree[n] = arr[s];
		 return;
	}
	int m = (s+e)/2;
	
	build(s, m, 2*n);
	build(m+1, e, 2*n+1);
	
	tree[n] = tree[2*n] + tree[2*n+1];

	return;
}

int query(int s, int e, int l, int r, int n){
	if(s>r || e<l) 
		return 0;
	
	// lazy implementation
	if(lazy[n]!=0){
		tree[n] = (e-s+1) * lazy[n];
		if(s!=e){
			lazy[2*n] += lazy[n];
			lazy[2*n+1] += lazy[n];
		}
		lazy[n] = 0;
	}
	
	if(s<=l && e>=r) 
		return tree[n];
	
	int m = (l+r)/2;
	int q1 = query(s, e, l, m, 2*n);
	int q2 = query(s, e, m+1, r, 2*n+1);
	return q1+q2;
}

void update(int s, int e, int l, int r, int n){
	if(s>r || e<l) return;
	
	if(l==r){
		arr[l] = !(arr[l]);
		tree[n] = arr[l];
		return;
	}	
	int m = (l+r)/2;

	update(s,e,m+1,r,2*n+1);
	update(s,e,l,m,2*n);

	tree[n] = tree[2*n] + tree[2*n+1];

	return;
}

int main(){
	boost;
	// rf; wf;
	
	int n,q,t,a,b;
	cin >> n >> q;
	rep(i,n) arr[i] = 0;
	build(0,n-1,1);
	
	rep(i,q){
		cin >> t >> a >> b;
		if(t)
			cout << query(a, b, 0, n-1, 1) << endl;
		else
			update(a,b,0,n-1,1);		
	}
}