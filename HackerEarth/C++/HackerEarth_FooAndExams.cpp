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
#define tr(it,x) for(typeof((x).begin()) it=x.begin(); it!=x.end(); it++)
#define all(x) x.begin(), x.end()
#define mems(a,b) memset(a, b, sizeof a)
#define pb push_back
#define mp make_pair
#define sz(a) (int)(sizeof(a))
#define present(a,b) (b.find(a) != b.end())
#define rf freopen("in.txt","r",stdin);
#define wf freopen("out.txt","w",stdout);

const int mod = 1000000007;
const int inf = INT_MAX;
const int pi = acos(-1.0);

ull a,b,c,d,k;

bool evaluate(ull t){
	ull sol = a*t+b;
	sol = sol*t + c;
	sol = sol*t + d;
	return sol<=k;
}

ull binarySearch(){
	ull low=0, high=1000000000;
	while(low!=high){
		ull mid = low + (high-low)/2;
		if(evaluate(mid)){
			low = mid+1;
		}else{
			high = mid;
		}
	}
	return low;
}

int main(){
	boost;
	rf; wf;
	tcase{
		cin >> a >> b >> c >> d >> k;
		cout << max(binarySearch()-1,0) << endl;		
	}
}