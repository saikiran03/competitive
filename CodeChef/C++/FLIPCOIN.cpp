#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef map<int,int> mpii;

#define boost ios_base::sync_with_stdio(false); cin.tie(0);
#define tcase int _tc; cin >> _tc; while(_tc--)
#define rep(i,n) for(int i=0; i<n; i++)
#define repr(i,n) for(int i=n; i>=0; i--)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define RFOR(i,a,b) for(int i=a; i>=b; i--)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)
#define all(x) x.begin(), x.end()
#define mems(a,b) memset(a, (b), sizeof a)
#define mp make_pair
#define pb push_back
#define Fs first
#define Se second
#define sz(a) (int)(a.size())
#define present(c,x) (c.find(x)!=c.end())
#define cpresent(c,x) (find(all(c),x) != c.end())
#define rf freopen("in.txt","r",stdin);
#define wf freopen("out.txt","w",stdout);

const int mod = 1000000007;
const int inf = INT_MAX;
const int pi = acos(-1.0);
const float EPS = 1e-9;
const int ms = 100005;

bool coins[ms];
int tree[4*ms] ,lazy[4*ms];

int build(int s, int e, int n){
	if(s==e)
		return tree[n] = coins[s];
	
	int mid = (s+e)/2;
	return tree[n] = build(s, mid, 2*n) + build(mid+1, e, 2*n+1);
}

int query(int l, int r, int s, int e, int n){
	if(l>e || r<s)
		return 0;
	
	if(lazy[n] != 0){
		tree[n] = (lazy[n]%2 ? (e-s+1 - tree[n]) : (tree[n]));
		if(s!=e){
			lazy[2*n] += lazy[n];
			lazy[2*n+1] += lazy[n];
		}
		lazy[n] = 0;
	}
	
	if(l<=s && e<=r)
		return tree[n];
		
	int mid = (s+e)/2;
	int p1 = query(l,r,s,mid,2*n);
	int p2 = query(l,r,mid+1,e,2*n+1);
	return p1+p2;
}

void update(int l, int r, int s, int e, int n){
	
	if(lazy[n]!=0){
		tree[n]  = (lazy[n]%2 ? (e-s+1 - tree[n]) : (tree[n]));
		if(s!=e){
			lazy[2*n] += lazy[n];
			lazy[2*n+1] += lazy[n];
		}
		lazy[n] = 0;
	}
	
	if(s>r || e<l)
		return;
	
	if(l<=s && e<=r){
		tree[n] = (e-s+1 - tree[n]);
		if(s!=e){
			lazy[2*n]++;
			lazy[2*n+1]++;
		}
		return;
	}
	
	int mid = (s+e)/2;
	update(l,r,s,mid,2*n);
	update(l,r,mid+1,e,2*n+1);
	tree[n] = tree[2*n] + tree[2*n+1];
	
	return;
}

int main(){
	boost;
	int n,q,t,a,b;
	mems(coins, 0);
	
	cin >> n >> q;
	build(0,n-1,1);

	rep(i,q){
		cin >> t >> a >> b;
		
		if(t)
			cout << query(a,b,0,n-1,1) << endl;
		else
			update(a,b,0,n-1,1);
	}
}