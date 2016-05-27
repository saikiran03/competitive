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

struct item{
	int weight, cost;
};

item fi[1000005], se[1000005];
inline bool compare(item a, item b){ return (a.cost<b.cost); }

ll fetchMaxCost(int fp, int sp, int c){
	if(c==0)
		return 0;
		
	if(c%2)
		return fi[fp].cost + fetchMaxCost(fp-1, sp, c-1);
	else{
		ll f1, f2, f3, cons ,dcons;
	
		if(fp>0 && sp>=0){
			f1 = fi[fp].cost;
			f2 = fi[fp-1].cost;
			f3 = se[sp].cost;
			if(f1+f2>f3)
				return f1+f2+fetchMaxCost(fp-2, sp, c-2);
			else
				return f3+fetchMaxCost(fp, sp-1, c-2);
		}
		else if(sp>=0){
			f3 = se[sp].cost;
			return  f3+fetchMaxCost(fp, sp-1, c-2);
		}
		else if(fp>0){
			f1 = fi[fp].cost;
			f2 = fi[fp-1].cost;
			return f1+f2+fetchMaxCost(fp-2, sp, c-2);
		}
		else{
			return 0;
		}
	}
}

int main(){
	boost;
	// rf; wf;
	int n, m=0, fp=0, sp=0;
	item v;
	
	cin >> n;
	rep(i,n){
		cin >> v.weight >> v.cost;
		m += v.weight;
	
		if(v.weight==1)
			{ fi[fp] = v; fp++; }
		else
			{ se[sp] = v; sp++; }
	}
	
	sort(fi, fi+fp, compare);
	sort(se, se+sp, compare);
	
	FOR(i,1,m)
		cout << fetchMaxCost(fp-1, sp-1, i) << " ";
	cout << endl;
		
}