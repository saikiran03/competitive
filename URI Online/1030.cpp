#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(0);
#define tcase int _tc; cin >> _tc; while(_tc--)

int safePos(int n, int k){
	if(n==1)
		return 0;
	else
		return (safePos(n-1, k) + k) % n;
}

int main(){
	boost;
	int n,m;
	tcase{
		cin >> n >> m;
		cout << safePos(n,m) << endl;
	}
}