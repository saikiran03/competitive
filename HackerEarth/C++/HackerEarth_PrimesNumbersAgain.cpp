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
const int N = 10000;
 
vi primatics;
int dp[N+5];
 
void sieve(int n){
	bool stat[n];
	mems(stat, true);
	for(int i=2; i*i <= n; i++)
		if(stat[i-2])
			for(int j = 2*i-2; j<n; j+=i)
				stat[j] = false;
 
	rep(i,n)
		if(stat[i])
			primatics.pb(i+2);
 
	return;
}
 
int getMinPrimatics(int n){
	if(n<0)
		return mod;
 
	if(dp[n] != -1)
		return dp[n];
 
	int sol = mod, s = sz(primatics);
	for(int i=0; i<s; i++){
		if(primatics[i]>n) break;
		sol = min(sol, getMinPrimatics(n-primatics[i]));
	}
	return dp[n] = sol + 1;
}
 
int main(){
	boost;
	int n;
	sieve(10000);
	primatics.insert(primatics.end(), {4,27,3125});
	sort(all(primatics));
	mems(dp, -1);
	tr(it, primatics)
		dp[*it] = 1;
 
	tcase{
		cin >> n;
		cout << getMinPrimatics(n) << endl;
	}
}