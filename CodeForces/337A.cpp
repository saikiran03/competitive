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

int arr[5005];

int main(){
	boost;
	int n,m,x;
	cin >> n >> m;
	rep(i,m) 
		cin >> arr[i];
	
	sort(arr,arr+m);
	x = arr[n-1]-arr[0];
	rep(i,m-n+1) 
		x = min(x, arr[i+n-1]-arr[i]);
	
	cout << x << endl;
}