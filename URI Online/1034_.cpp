#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
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
#define sz(a) (int)(a.size())
#define present(c,x) (c.find(x)!=c.end())
#define cpresent(c,x) (find(all(c),x) != c.end())
#define rf freopen("in.txt","r",stdin);
#define wf freopen("out.txt","w",stdout);

const int mod = 1000000007;
const int inf = INT_MAX;
const int pi = acos(-1.0);
const int EPS = 1e-9;

int arr[30], dp[1000005];

int minCubes(int f, int m, int s){
	if(m==0)
		return 0;
	
	if(f==s || m<0)
		return inf;
		
	if(dp[m]!=-1)
		return dp[m];
		
	int sol = inf;
	for(int i=f; i<s; i++){
		int cons = minCubes(i, m-arr[i], s);
		sol = min(sol, cons);
	}
	
	return dp[m] = 1 + sol;
}

int main(){
	boost;
	int n,m;
	tcase{
		mems(dp, -1);
		cin >> n >> m;
		rep(i,n)
			cin >> arr[i];
		
		sort(arr, arr+n, greater<int>());
		cout << minCubes(0, m, n) << endl;
	}
}