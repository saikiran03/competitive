#include <bits/stdc++.h>
using namespace std;

#define FOR(i,n) for(int i=0; i<n; i++)

int lcsLen(string a, string b){
	int m = a.length();
	int n = b.length();
	int c[m+1][n+1];
	FOR(i,m) c[i+1][0]=0;
	FOR(i,n+1) c[0][i]=0;
	for(int i=1; i<=m; i++){
		for(int j=1; j<=n; j++){
			if(a[i]==b[j]){ c[i][j]=c[i-1][j-1]+1;}
			else if(c[i-1][j]>=c[i][j-1]) c[i][j] = c[i-1][j];
			else c[i][j] = c[i][j-1];
		}
	}
	return c[m][n];
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int tc,m;
	cin >> tc;
	while(tc--){
		cin >> m;
		string li[m];
		FOR(i,m) cin >> li[i];
		FOR(i,m-1) cout << lcsLen(li[i],li[i+1]) << endl;
	}
}
May your birthday be filled with many happy hours and your life with many happy birthdays. HAPPY BIRTHDAY !!