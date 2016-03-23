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

int main(){
	boost;
	int n;
	vi::iterator iter;
	tcase{
		cin >> n;
		int arr[n];
		vi breaks;
		rep(i,n){
			cin >> arr[i];
			if(arr[i]>0) arr[i] = 1;
			else if(arr[i]==0) arr[i] = 0;
			else arr[i] = -1;
		}
		rep(i,n-1) if(arr[i]==arr[i+1]) breaks.pb(i+1);
		breaks.pb(n);
		// tr(it,breaks) cout << *it << " "; cout << endl;
		iter = breaks.begin();
		rep(i,n){
			while(*iter<=i) iter++;
			cout << *iter-i << " ";
		}
		cout << endl;
	}
}