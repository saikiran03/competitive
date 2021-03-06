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
#define rf freopen("fout.txt","r",stdin);
#define wf freopen("cout.txt","w",stdout);

const int mod = 1000000007;
const int inf = INT_MAX;
const int pi = acos(-1.0);
const int EPS = 1e-9;

int gL(ll z){
	int i = 0; ll p = 1;
	while(p<z){ p*=5; i++;}
	return i;
}

int main(){
	boost;
	ll k; int l;
	char states[5] = {'0', '2', '4', '6', '8'};
	tcase{
		string sol = "";
		cin >> k;
		
		if(k<6)
			cout << states[k-1] << endl;
	
		else{
			
			l = gL(k); //ceil((float)log(k)/log(5));
			ll p = pow(5, l-1);
			
			rep(i,l){
				int pos = (int)ceil((float)k/p)-1;
				
				if(pos==-1)
					pos = 4;
				
				sol += states[pos];
				k%=p; p/=5; 
			}
			
			cout << sol << endl;
		}
	}
}