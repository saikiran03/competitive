#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> ii;
typedef vector<ii> vii;
 
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
 
int greedy_interval(vii intervals){
	int l=intervals.size(), res=1, p=1;
	ii cur = intervals[0];
	while(p<l){
		while(p<l && intervals[p].second < cur.first) p++;
		if(p<l && intervals[p].second >= cur.first){ res++; cur = intervals[p]; }
		p++;
	}
	return res;
}
 
int main(){
	boost;
	tcase{
		int n;
		cin >> n;
		vii vp;
		rep(i,n){
			ii p;
			cin >> p.second >> p.first ;
			vp.pb(p);
		}
		sort(all(vp));
		cout << greedy_interval(vp) << endl; 
	}
}