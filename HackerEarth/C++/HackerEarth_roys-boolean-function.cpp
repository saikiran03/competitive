#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<int,int> ii;
typedef unsigned long long ull;
typedef long long ll;

#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rf freopen("in.txt","r",stdin);
#define wf freopen("out.txt","w",stdout);
#define tcase int __T; cin >> __T; while(__T--)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define rep(i,n) for(int i=0; i<n; i++)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)
#define pb push_back
#define all(x) x.begin(),x.end()
#define st first
#define se second

const int mod = 1000000007;
vi primes;

void sieve(int n){
	bool stat[n-1];
	rep(i,n-1) stat[i]=true;
	int p=1, i=2, r=sqrt(n)+1;
	// eliminate 2 multiples
	while(i<n-1){ stat[i] = false; i+=2; }
	//eliminate other multiples.
	while(p<r){
		if(stat[p]){
			i = 2*p+2;
			while(i<n-1){
				stat[i] = false;
				i+=(p+2);
			}
		}
		p+=2;
	}
	rep(i,n-1){
		if(stat[i]) primes.pb(i+2);
	}
	return;
}

int gcd(int a,int b){
	int t;
	while(b!=0){
		t = a%b;
		a = b;
		b = t;
	}
	return a;
}

int main(){
	boost;
	int n,cnt;
	sieve(100000);
	tcase{
		cnt = 0;
		cin >> n;
		FOR(i,1,n) if(gcd(i,n)==1) cnt++;
		if(binary_search(all(primes),cnt)) cout << "TRUE" << endl;
		else cout << "FALSE" << endl;
	}
}