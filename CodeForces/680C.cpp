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

int main(){
	boost;
	bool p[4];
	int f=0,primes[25] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
	bool isPrime = true;;
	string s;
	
	mems(p, false);
	rep(i,4){
		cout << primes[i] << endl;
		fflush(stdout);
		cin >> s;
		if(s=="yes"){
			p[i] = true;
			f++;
			isPrime = false;
		}
	}
	
	if(f==1){
		vi suspects;
		int ind;
		rep(i,4)
			if(p[i])
				ind = i;
		
		if(ind==0){
			suspects.pb(4);
			FOR(i,4,14)
				suspects.pb(primes[i]);
		}
		else if(ind==1){
			suspects.pb(9);
			FOR(i,4,11)
				suspects.pb(primes[i]);
		}else if(ind==2){
			suspects.pb(25);
			FOR(i,4,8)
				suspects.pb(primes[i]);
		}else{
			suspects.pb(49);
			FOR(i,4,6)
				suspects.pb(primes[i]);
		}
		
		bool fl = true;
		tr(it, suspects){
			cout << *it << endl;
			fflush(stdout);
			cin >> s;
			if(s=="yes"){
				fl = false;
				isPrime = false;
			}
		}
		if(fl)
			isPrime = true;
	
	}
	
	if(isPrime)
		cout << "prime" << endl;
	else
		cout << "composite" << endl;
	fflush(stdout);

}