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
 
int main(){
	boost;
	int n;
	tcase{
		cin >> n;
		int cnt,l[n],r[n],lr[n];
		rep(i,n) cin >> l[i];
		rep(i,n){ cin >> r[i]; lr[i] = r[i]*l[i]; }
		int* mx = max_element(lr,lr+n);
		if(count(lr,lr+n,*mx)>1){
			mx = max_element(r,r+n);
			cout << mx-r+1 << endl;
		}else{
			cout << mx-lr+1 << endl;
		}
	}
}