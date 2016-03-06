#include <bits/stdc++.h>
using namespace std;

int sumDigs(int a){
	int res=0;
	while(a){
		res*=10;
		res+=(a%10);
		a/=10; 
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int a,b;
	long long int res;
	cin >> a >> b;
	while(a!=-1 && b!=-1){
		res = 0;
		for(int i=a; i<=b; i++) { res += sumDigs(i); cout << res << " "; }
		cout << endl;
		cout << res << endl; 
		cin >> a >> b;
	}
}