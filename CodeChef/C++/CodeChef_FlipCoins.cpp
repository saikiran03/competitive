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
#define DBG(x) cout << x << endl;
#define DBG2(x,y) cout << x << " "; DBG(y);
#define DBG3(x,y,z) cout << x << " "; DBG2(y,z);
#define DBG4(w,x,y,z) cout << w << " "; DBG3(x,y,z);

bool arr[100005];
int tree[4*100005];

void build(int s, int e, int n){
	//DBG3(s,e,n);
	if(s==e){
		tree[n] = arr[s];
		return;
	}
	int m = (s+e)/2;
	build(s,m,2*n);
	build(m+1,e,2*n+1);
	tree[n] = tree[2*n] + tree[2*n+1];
	return;
}

int query(int l, int r, int s, int e, int n){
	if(l>e || r<s) return 0;
	if(l>=s && r<=e){
		int p1 = query(l,r,s,(s+e)/2,2*n);
		int p2 = query(l,r,(s+e)/2+1,e,2*n+1);
		return p1+p2;
	}
}

void update(int s, int e, int l, int r, int n){
    // DBG4(s,e,idx,n);
	if(s>r || e<l) return;
	if(s==e){
		arr[s] = !arr[s];
		tree[n] = arr[s];
		return;
	}else{
		int m = (s+e)/2;
		update(s,m,l,r,2*n);
		update(m+1,e,l,r,2*n+1);
		tree[n] = tree[2*n] + tree[2*n+1];
		return;
	}
}

int main(){
	boost;
	int n,q,t,x,y;
	cin >> n >> q;
	rep(i,n) arr[i] = false;
	build(0,n-1,1);
	rep(i,q){
	    // cout << "iteration no. " << i+1 << endl;
		cin >> t >> x >> y;
		// update(0,n-1,0,1);
		if(t){
			cout << query(x,y,0,n-1,1) << endl;
		}else{
			update(0,n-1,x,y,1);
		}
	}
}