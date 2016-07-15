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
const int N = 10005;

int a[N], b[N], c[N], d[N];

int main(){
	boost;
	int n;
	tcase{
		cin >> n;
		rep(i,n)
			cin >> b[i];
		rep(i,n)
			cin >> a[i];
			
		if(n==1)
			cout << a[0]+ b[0] << endl;
		else{
			
			int sol = -1, pv[4] = {a[0], a[0]+b[0], a[0]+b[1], a[0]+b[0]+b[1]};
			
			rep(i,4){
				bool f = true;
				rep(j,n){
					c[j] = a[j];
					d[j] = b[j];
				}d[n] = 0;
				c[0] = pv[i];
				
				if(i==1)
					d[0] = 0;
				else if(i==2)
					d[1] = 0;
				else if(i==3)
					d[0] = d[1] = 0;
				
				FOR(j,1,n-1){
					if(c[j] == c[0])
						c[j] = c[0];
					else if(c[j] + d[j-1] == c[0]){
						c[j] += d[j-1];
						d[j-1] = 0; 
					}else if(c[j] + d[j] == c[0]){
						c[j] += d[j];
						d[j] = 0; 
					}else if(c[j] + d[j+1] == c[0]){
						c[j] += d[j+1];
						d[j+1] = 0; 
					}else if(c[j] + d[j-1] + d[j] == c[0]){
						c[j] += d[j-1] + d[j];
						d[j-1] = d[j] = 0; 
					}else if(c[j] + d[j+1] + d[j] == c[0]){
						c[j] += d[j+1] + d[j];
						d[j+1] = d[j] = 0; 
					}else if(c[j] + d[j-1] + d[j+1] == c[0]){
						c[j] += d[j-1] + d[j+1];
						d[j-1] = d[j+1] = 0; 
					}else if(c[j] + d[j-1] + d[j] + d[j+1] == c[0]){
						c[j] += d[j-1] + d[j] + d[j+1];
						d[j-1] = d[j] = d[j+1] = 0;
					}else{
						f = false;
						break;
					}
				}
				
				if(f)
					rep(j,n)
						if(c[j] != c[0] || d[j] != 0)
							{f = false; break;}
				
				if(f)
					sol = max(sol, c[0]);
			}
			
			cout << sol << endl;
		}
	}
}