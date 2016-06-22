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

int n, m, a, b;
int A[1005][1005];

struct maxDeque{
	deque<int> d,mn;
	int sum;
	maxDeque():sum(0){}
	
	void push(int x){
		d.push_back(x);
		while(!mn.empty() && mn.back()<x)
			mn.pop_back();
		mn.push_back(x);
		sum += x;
	}
	
	void pop(){
		if(mn.front()==d.front())
			mn.pop_front();
		sum -= d.front();
		d.pop_front();
	}
	
	int mx(){
		return mn.front();
	}
};

int main(){
	boost;
	// rf; wf;
	
	cin >> n >> m;
	FOR(i,1,n)
		FOR(j,1,m)
			cin >> A[i][j];

	tcase{
		cin >> a >> b;
		
 		if(a==1 && b==1)
		 	cout << 0 << endl;
		else{
			
			int ans = inf;
			maxDeque c[m+1], y;
			FOR(i,1,a-1)
				FOR(j,1,m)
					c[j].push(A[i][j]);
			
			FOR(i,1,n-a+1){
				
				FOR(j,1,m)
					c[j].push(A[i+a-1][j]);
				
				y = maxDeque();
				int sum = 0;
				
				FOR(j,1,b-1){
					y.push(c[j].mx());
					sum += c[j].sum;
				}
				
				FOR(j,1,m-b+1){
					sum += c[j+b-1].sum;
					y.push(c[j+b-1].mx());
					ans = min(ans, y.mx()*a*b - sum);
					y.pop();
					sum -= c[j].sum;
				}
				
				FOR(j,1,m)
					c[j].pop();
			}
			
			cout << ans << endl;
		}
	}
}