#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> ii;
typedef map<int, int> mpii;
typedef set<int> seti;
 
#define boost ios_base::sync_with_stdio(false); cin.tie(0);
#define tcase int _tc; cin >> _tc; while(_tc--)
#define rep(i,n) for(int i=0; i<n; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)
#define all(x) x.begin(), x.end()
#define mp make_pair
#define pb push_back
#define mems(a,b) memset(a, (b), sizeof(a))
#define rf freopen("in.txt","r",stdin);
#define wf freopen("out.txt","w",stdout);
 
const int mod = 10e9+7;
const int inf = INT_MAX;
const int pi = acos(-1.0);
 
string sol;
 
bool is_possible(int t, int s, int n, string par){
	if(n==0){
		sol = par;
		if(s==t)
			return true;
		else
			return false;
	}
 
	if(s>t)
		return is_possible(t, s-n, n-1, par + "-");
 
	else if(s==t)
		return is_possible(t, s-n, n-1, par + "-") || is_possible(t, s+n, n-1, par + "+");
 
	else
		return is_possible(t, s+n, n-1, par + "+");
}
 
int main(){
	boost;
	int s, n;
	cin >> n >> s;
 
	if(is_possible(s, 0, n, "")){
		reverse(all(sol));
 
		rep(i,n){
			if(i!=0 || sol[i]!='+') cout << sol[i];
			cout << i+1;
		}
 
	}else
		cout << "Impossible";
 
}