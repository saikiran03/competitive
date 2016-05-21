#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> ii;
typedef vi::iterator vit;

#define boost ios_base::sync_with_stdio(false); cin.tie(0);
#define tcase int _tc; cin >> _tc; while(_tc--)
#define rep(i,n) for(int i=0; i<n; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define tr(it,x) for(vit it=x.begin(); it!=x.end(); it++)
#define all(x) x.begin(), x.end()
#define mp make_pair
#define pb push_back
#define rf freopen("in.txt","r",stdin);
#define wf freopen("out.txt","w",stdout);

int primes[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
vvi nums(25);
vi v;
vvi solset;

const int mod = 1e9+7;
inline int iL(int a, int b, int m){ return m/(a*b); }
inline int numberOfPrimes(int n){ return lower_bound(primes, primes+25, n) - primes; }
inline int gcd(int a, int b){ if(b) return gcd(b,a%b); return a;}

int npm(int n, int m){
	ll res=1; int t = n-m;
	while(n>t){
		res *= n;
		res %= mod;
		n--;
	}
	return res;
}

void fill(int m){
	rep(i,25){
		if(primes[i]>m) 
			return;
		int d = primes[i];
		FOR(j,2,m){
			if(j%d==0) nums[i].pb(j);
		}
	}
	return;
} 

void draw(int m){
	rep(i,25){
		if(m<primes[i]) return;
		for(vit it=nums[i].begin(); it!=nums[i].end(); it++) 
			cout << *it << " ";
		cout << endl;
	}
	return;
}

bool arrGCD(vit a, vit b){
	for(vit it = a; it!=b; it++){
		for(vit jt = it+1; jt!=b; jt++){
			if(gcd(*it,*jt)!=1) return false;
		}
	}
	return true;
}

void genCoPrimes(int m, int p, int f){
	if(p==0){
		if(arrGCD(all(v))) solset.pb(v);
		cout << "reached leaf popping = " << v[v.size()-1] << endl;
		v.pop_back();
		return;
	}
	if(primes[f]>m){
		return;
	}
	for(int i=f; primes[i]<=m; i++){
		for(vit it = nums[i].begin(); it!=nums[i].end(); it++){
			v.pb(*it);
			cout << p << " " << primes[i] << " " << *it << endl;
			cout << "vector => "; tr(it,v) cout << *it << " "; cout << endl;		
			genCoPrimes(m,p-1,i+1);
			// v.pop_back();
		}
		cout << "traversed all leaves popping = " << v[v.size()-1] << endl;
		v.pop_back();
	}
	return;
}

int numberOfWays(int n, int m, int p){
	if(p==0) return 1;
	if(p==1) return m;
	genCoPrimes(m,p,0);
	return 0;
}

int main(){
	boost;
	rf; wf;
	int n,m,p;
	ll now;
	tcase{
		now = 0;
		cin >> n >> m;
		fill(m);
		p = numberOfPrimes(m);
		genCoPrimes(m,p,0);
		int l = solset.size();
		rep(i,l){
			rep(j,solset[i].size()) cout << solset[i][j] << " ";
			cout << endl;
		}
		// rep(i,p+1){
		// 	now += npm(n,n-i)*numberOfWays(n,m,i);
		// 	now %= mod;
		// }
		// draw(m);
		// cout << "now " <<  now << endl;
		// cout << now << endl;
		rep(i,25) nums[i].clear();
	}
}