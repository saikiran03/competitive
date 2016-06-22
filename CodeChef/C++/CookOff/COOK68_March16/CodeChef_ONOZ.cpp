#include <bits/stdc++.h>
using namespace std;

#define inf 1000000007

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef pair<int,int> ii;

#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define tcase int __T; cin >> __T; while(__T--)
#define rep(i,n) for(int i=0; i<n; i++)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)
#define pb push_back
#define all(x) x.begin(),x.end()

int solve(int x, int y){
	int a,b,c,d;
	a = min(x,y);
	b = max(x,y);
	c = a/11;
	d = b/11;
	return min(a+1,10) + min(d,a) + min(c,b) + min(c,d);
}

int main(){
	boost;
	int h, m;
	tcase{
		cin >> h >> m;
		cout << solve(h-1, m-1) << endl;
	}	
}