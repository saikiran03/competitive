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
	tcase{
		int n, k;
		float avg;
		cin >> n >> k;
		int arr[n];
		rep(i,n) cin >> arr[i];
		sort(arr, arr+n);
		FOR(i, k-1, n-2*k-1) avg += arr[i];
		avg /= n;
		cout << fixed;
		cout << setprecision(6) << avg << endl;
	}
}