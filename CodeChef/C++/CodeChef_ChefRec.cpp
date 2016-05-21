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

int main(){
	boost;
	int n,m,p,i,j;
	vi tp;
	tcase{
		cin >> n >> m;
		int arr[n][m];
		rep(i,n) rep(j,m) cin >> arr[i][j];
		p = 0;
		while(p < n+m-1){
			i = 0; j = p-i;
			while(i<n && j>=0){
				tp.pb(arr[i][j]);
				// cout << arr[i][j] << " ";
				cout << p << " " << i << " " << j << endl;
				i++; j--;
			}
			p++;
		}
		tr(it,tp) cout << *it << " ";
		cout << endl;
	}
}