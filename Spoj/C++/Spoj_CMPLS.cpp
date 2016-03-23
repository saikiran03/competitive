#include <bits/stdc++.h>
using namespace std;
#define FOR(i,n) for(int i=0; i<n; i++)

int main(){
	int tc,s,c,flag,diff,depth;
	cin >> tc;
	while(tc--){ 
		cin >> s >> c;
		int arr[s+c][s+c];
		depth = 1;
		FOR(i,s) cin >> arr[0][i];
		
		FOR(i,s+c-1){
			diff = arr[i][1]-arr[i][0];
			flag =1;
			FOR(j,s-i-1){
				arr[i+1][j] = arr[i][j+1]-arr[i][j];
				if(diff!=arr[i+1][j]) flag=0;
			}
			depth++;
			if(flag) break;
		}
		
		diff = arr[depth-1][0];
		FOR(i,c) arr[depth-1][s-depth+1+i] = diff;
		FOR(i,depth-1){
			FOR(j,c){
				arr[depth-i-1][j] = arr[depth-i][s-depth+j]+arr[depth-i-1][s-depth+j];
			}
		}
		FOR(i,c) cout << arr[0][s+i] << " ";
	}
}

