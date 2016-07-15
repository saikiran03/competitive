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
 
int a[1005];
 
int main(){
	boost;
	
	tcase{
		mpii hash;
		int vs,n,p=2, sol = 1;
		
		cin >> n;
		rep(i,n)
			cin >> a[i], hash[a[i]]++;
		sort(a, a+n, greater<int>());
		
		vi s; int sd=0;
		tr(it, hash){
			if(it->second>1){
				s.pb(it->first);
				sd += (it->second/2)*2;
			}
		}
		sort(all(s), greater<int>());
		
		if(hash[s[0]]>=4)
			sol = s[0]*s[0];
		else
			sol = s[0]*s[1];
		
		cout << (sd>3?sol:-1) << endl;
	}
} 