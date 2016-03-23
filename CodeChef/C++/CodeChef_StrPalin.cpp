#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(0);
#define rep(i,n) for(int i=0; i<n; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define tcase int _tc; cin >> _tc; while(_tc--) 

int main(){
	string a,b;
	int la,lb;
	bool flag;
	tcase{
		flag = false;
		cin >> a >> b;
		la = a.length();
		lb = b.length();
		rep(i,la){
			auto it = b.find(a[i]);
			if(it-b.begin()<lb) flag = true;
			if(flag) break;
		}
		if(flag) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}