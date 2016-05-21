#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> ii;

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

int main(){
	boost;
	int l,sol,lds[10] = {6,2,5,5,4,5,6,3,7,6};
	string s;
	tcase{
		cin >> s;
		l = s.length(); sol = 0;
		rep(i,l)
			sol += lds[s[i]-'0'];
		cout << sol << endl;
	}
}