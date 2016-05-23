#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> ii;

const int mod = 10e+9;
const int inf = INT_MAX;
const int pi = acos(-1);

#define boost ios_base::sync_with_stdio(false); cin.tie(0);
#define tcase int _tc; cin >> _tc; while(_tc--)
#define rep(i,n) for(int i=0; i<n; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)
#define all(x) x.begin(), x.end()
#define mp make_pair
#define pb push_back
#define rf freopen("in.txt","r",stdin);
#define wf freopen("out.txt","w",stdout);

inline int mul(int a, int b){ return (int)( ((ll)a * (ll)b)%mod ); }
inline int add(int a, int b){ return (int)((ll)a +(ll)b); }
inline int gcd(int a, int b){ if(b) return gcd(b,a%b); return a;}

int arr[100005];

int main(){
	boost;
	// rf; wf;
	int n,t;
	ll req=0, et=0;
	
	cin >> n;
	rep(i,n){
		cin >> arr[i];
		
		if(arr[i]==1)
			et++;
		
		else{
			arr[i]-=2;
			req += arr[i];
		}
		
	}
	
	if(et>=req)
		cout << n << endl;
	
	else
		cout << n + (int)ceil((req-et)/2.0) << endl;
}