#include <bits/stdc++.h>
using namespace std;
 
#define inf 1000000007
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef pair<int,int> ii;
 
#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define tcase int __T; cin >> __T; while(__T--)
#define rep(i,n) for(int i=0; i<n; i++)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)
#define pb push_back
#define all(x) x.begin(),x.end()
 
int tree[1005],arr[251];
 
void build(int s, int e, int n){
	cout << s << " " << e << " " << n << endl; 
	if(s==e){
		tree[n] = arr[s];
	}else{
		int m = (s+e)/2;
		build(s,m,2*n);
		build(m+1,e,2*n+1);
		tree[n] = tree[2*n+1]+tree[2*n];
	}
	return;
}
 
void trav(int s, int e, int n){
	int m = (s+e)/2;
	if(s==e){
		cout << tree[n] << " ";
		return;
	}else{
		cout << tree[n] << " ";
		trav(s,m,2*n);
		trav(m+1,e,2*n+1);
		return;
	}
}
 
int query(int s, int e, int l, int r, int n){
	if(r<s && e<l) return 0;
	if(l<=s && e<=r) return tree[n];
	int m = (s+e)/2;
	int p1 = query(s,m,l,r,2*n);
	int p2 = query(m+1,e,l,r,2*n+1);
	return p1+p2;
}
 
int main(){
	boost;
	int n;
	cin >> n;
	rep(i,n) cin >> arr[i];
	build(0,n-1,1);
	// rep(i,11) cout << tree[i] << ' '; cout << endl;
	// trav(0,n-1,1);
	cout << query(0,2,0,5,1) << endl;
}
