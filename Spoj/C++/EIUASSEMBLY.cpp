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

ii robot[100005];

inline int compare(ii a, ii b){ return (a.first<b.first); }

bool feasible(int products, ll budget, int robots){
	rep(i,robots){
		budget -= max(0, products-robot[i].first) * robot[i].second;
		if(budget<0)
			return false;
	}
	return (budget>=0);
}

int binarySearch(ll budget, int robots){
	int low = 0, high = 1000000000;
	
	while(low!=high){
		int mid = low + (high-low)/2;
	
		if(feasible(mid, budget, robots))
			high = mid;
		else
			low = mid+1;
	}
	
	return low;
}

int main(){
	boost;
	// rf; wf;
	tcase{
		int n; ll m;
		cin >> n >> m;
		rep(i,n)
			cin >> robot[i].first >> robot[i].second;
		
		sort(robot, robot+n, compare);
		cout << binarySearch(m, n) << endl;
	}
}