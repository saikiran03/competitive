#include <iostream>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(0);
#define tcase int _tc; cin >> _tc; while(_tc--)
#define rep(i,n) for(int i=0; i<n; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define min3(a,b,c) min(a,min(b,c))

const int N = 100005;
int d[N][3];

int main(){
	boost;
	int n,u,v,w,ui,vi,wi;
	
	tcase{
		cin >> n;
		rep(i,n)
			cin >> d[i][0] >> d[i][1] >> d[i][2];
		
		u = d[0][0]; v = d[0][1]; w = d[0][2];
		FOR(i,1,n-1){
			ui = min(v, w) + d[i][0];
			vi = min(u, w) + d[i][1];
			wi = min(u, v) + d[i][2];
			u = ui; v = vi; w = wi;
		}
			
		cout << min3(u, v, w) << endl;
	}
}