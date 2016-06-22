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
 
bool a[1000005], b[1000005];
 
int main(){
	boost;
	// rf; wf;
	string as, bs;
	int n;
		
	tcase{
		cin >> as >> bs;
		n = as.length();
		
		int os=0, is=0, nmo=0, nmi=0;
		rep(i,n){
			a[i] = as[i]-'0';
			b[i] = bs[i]-'0';
			a[i]? os++: is++;
			if(a[i]!=b[i])
				a[i]? nmi++: nmo++;
		}
		
		if(is==0 || os==0)
			cout << "Unlucky Chef" << endl;
		
		else
			cout << "Lucky Chef" << endl << max(nmi,nmo) << endl;	
		
	}
} 