#include <iostream>
using namespace std;
#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define rep(i,n) FOR(i,0,n-1)

int main()
{
	boost;
	int n,x,y;
	cin >> n;
	rep(i,n){
		cin >> x;
		if(i!=0) cout << (i+1)*x - i*(y) << " ";
		else cout << x << " ";
		y=x;
	}
	cout << endl;
}