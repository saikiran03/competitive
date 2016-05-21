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
	int sol;
	cout << 1 << endl;
	cout << "3 1 2 2" << endl;
	cout << "3 3 4 4" << endl;
	cin >> sol;
	fflush(stdout);
	cout << 2 << endl;
	if(sol==1) cout << 1 << endl;
	else if(sol==2) cout << 2 << endl;
	else if(sol==-1) cout << 3 << endl;
	else if(sol==-2) cout << 4 << endl;
	else cout << 5 << endl;
	// fflush(stdout);  
}