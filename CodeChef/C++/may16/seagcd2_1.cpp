#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
typedef vi::iterator vit;

#define boost ios_base::sync_with_stdio(false); cin.tie(0);
#define tcase int _tc; cin >> _tc; while(_tc--)
#define rep(i,n) for(int i=0; i<n; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)
#define all(x) x.begin(), x.end()
#define pb push_back
#define rf freopen("in.txt","r",stdin);
#define wf freopen("out.txt","w",stdout);

const int mod = 1e9+7;
int primes[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
vvi nums(25);
vi t; vvi sol;

inline int numberOfPrimes(int i){ return upper_bound(primes, primes+25, i) - primes; }
inline int gcd(int a, int b){ if(b) return gcd(b,a%b); return a; }

void fillMultiples(int m){
	rep(i,25){
		FOR(j,2,m)
			if(j%primes[i]==0) nums[i].pb(j);
	}
	return;
}

vvi generateCombinations(int n, int r){
	int arr[n];
	vi t; vvi sol;
	rep(i,r) arr[i] = 1;
	FOR(i,r,n-1) arr[i] = 0;
	
	do{
		rep(i,n) if(arr[i]) t.pb(i);
		sol.push_back(t);
		t.clear();
	}while(prev_permutation(arr,arr+n));
	
	return sol;
}

int getWays(vi v, int s){
	ll res = 1;
	rep(i,s){
		FOR(j,i+1,s-1){
			res *= nums[v[i]].size() - m/(primes[v[i]]*primes[v[j]]);
			res %= mod;
		}
	}
	return res;
}

int npm(int n, int m){
	if(n<m) return 1;
	ll res = 1; int t = n-m;
	while(n>t){
		res *= n;
		res %= mod;
	}
	return (int) res;
}

int coprimes(int l, int m){
	if(l==0) return 1;
	
	if(l==1) return m-1;
	
	int max_coprimes = numberOfPrimes(m);
	vvi s = generateCombinations(max_coprimes,l);
	ll ways = 0;
	rep(i,s.size()){
		ways += getWays(s[i],l);
		ways %= mod;
	}
	return (int)ways;
}

int main(){
	boost;
	int n,m,max_coprimes;
	ll ways;
	tcase{
		cin >> n >> m;
		fillMultiples(m);
		ways = 0;
		max_coprimes = min(n,numberOfPrimes(m));
		rep(i, max_coprimes+1){
			ways += (npm(n,i)*coprimes(i,m))%mod;
			ways %= mod;
			//  ways += coprimes(i,m);
		}
		cout << ways % mod << endl;
		rep(i,25) nums[i].clear();
	}
}