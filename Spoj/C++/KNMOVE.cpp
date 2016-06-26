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
 
int dp[1005][1005];
 
vii neighbours(int a, int b){
	vii s;
	if(a>1 && b>2) s.pb(mp(a-1, b-2));
	if(a>2 && b>1) s.pb(mp(a-2, b-1));
	if(a>2) s.pb(mp(a-2, b+1));
	if(b>2) s.pb(mp(a+1, b-2));
	if(a>1) s.pb(mp(a-1, b+2));
	if(b>1) s.pb(mp(a+2, b-1));
	s.pb(mp(a+2, b+1));
	s.pb(mp(a+1, b+2));
	return s;
}
 
void calcDistances(){
	queue<ii> Q; int s;
	
	dp[1][1] = 0;
	Q.push(mp(1,1));
 
	while(!Q.empty()){
		ii c = Q.front();
		Q.pop();
 
		vii n = neighbours(c.Fs, c.Se);
		s = n.size();
 
		rep(i,s){
			ii p = n[i];
 
			if(p.Fs<1001 && p.Se<1001 && dp[p.Fs][p.Se]==-1){
				dp[p.Fs][p.Se] = dp[c.Fs][c.Se] + 1;
				Q.push(p);
			}
		}
	}
 
	return;
}
 
int main(){
	boost;

	mems(dp, -1);
	calcDistances();	
 
	tcase{
		int a,b;
		cin >> a >> b;
		cout << dp[a][b] << endl;
	}
}