#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> ii;
typedef vector<ii> vii;

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

struct node{
	int sm;
	int sm_a;
	int sm_b;
	int ms;
};
typedef node node;

const int inf = 1000000007;
const int max_size = 50005; 
int arr[max_size],mn=0;
node tree[4*max_size] = {0};
node nil;

node merge(node a, node b){
	node r;
	r.sm = a.sm + b.sm;
	r.sm_b = max(a.sm_b, a.sm + b.sm_b);
	r.sm_a = max(a.sm_a, b.sm + a.sm_a);
	r.ms = max(r.sm_b, max(r.sm_a, max(a.ms, max(b.ms, a.sm_a + b.sm_b))));
	return r;
}

void build(int s, int e, int n){
	if(s==e){
 		tree[n].sm = tree[n].sm_a = tree[n].sm_b = tree[n].ms = arr[s];
		return;
	}
	int m = (s+e)/2;
	
	build(s, m, 2*n);
	build(m+1, e, 2*n+1);
	
	tree[n] = merge(tree[2*n] , tree[2*n+1]);
	return;
}

node query(int s, int e, int l, int r, int n){
	if(s>r || e<l)
		return nil;
	
	if(s<=l && e>=r) 
		return tree[n];

	int m = (l+r)/2;
	return merge(query(s, e, l, m, 2*n), query(s, e, m+1, r, 2*n+1));
}

int main(){
	boost;
	// rf; //wf;
	nil.sm = nil.sm_a = nil.sm_b = nil.ms = -inf;
	
	int n,q,t,a,b;
	cin >> n;
	rep(i,n) cin >> arr[i];
	build(0,n-1,1);
	
	cin >> q;
	rep(i,q){
		cin >> a >> b;
		cout << query(a-1, b-1, 0, n-1, 1).ms << endl;
	}
}