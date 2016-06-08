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
 
int a[100000], w[64];
 
int bz(int n){
	int z=0, l=0;
	while(n){
		if(n%2==0)
			z++;
		n/=2; l++;
	}
	return (int)pow(3, 6+z-l);
}
 
int main(){
	boost;
	string s;
	rep(i,64)
		w[i] = bz(i);
 
	cin >> s;
	int n = s.length();
	rep(i,n)
		if(s[i]=='-')
			a[i] = 62;
		else if(s[i]=='_')
			a[i] = 63;
		else if(s[i]-'0'>=0 && s[i]-'9'<=0)
			a[i] = (int)(s[i] - '0');
		else if(s[i]-'a'>=0)
			a[i] = (int)(s[i] - 'a');
		else
			a[i] = (int)(s[i] - 'A');
	
	ll sol = 1;
	rep(i,n)
		sol = (sol * w[a[i]]) % mod;
 
	cout << sol << endl;
}