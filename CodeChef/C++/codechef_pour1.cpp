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

int solve(int a, int b, int c){
	int move=0, tfr, av=a, bv=0;
	while(av!=c || bv!=c){
		cout << av << " " << bv << endl;
		tfr = min(a,b-bv);
		b += tfr;
		a -= tfr;
		move++;
		if(av==c||bv==c) break;
		if(av==0){
			move++;
			av=a;
		}
		if(bv==b){
			bv=0;
			move++;
		}
	}
	return move;
}

int gcd(int a, int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}

int main(){
	boost;
	// rf; wf;
	tcase{
		int a,b,c;
		cin >> a >> b >> c;
		if(c>a && c>b){
			cout << -1 << endl;
		}else if(c%gcd(a,b)){
			cout  << -1 << endl;
		}else if(c==a||c==b){
			cout << -1 << endl;
		}else{
			cout << min(solve(a,b,c), solve(b,a,c)) << endl;
		}
	}
}