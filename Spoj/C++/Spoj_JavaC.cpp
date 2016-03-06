#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define TCASE int __T; cin >> __T; FOR(Tc,1,__T)
#define rep(i,n) FOR(i,0,n-1)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)

int main()
{
	boost;
	string q,sol;
	int sz,r;
	bool flag,cpp,java;
	cpp = java = false;
	while(cin >> q){
		sz = q.length();
		int arr[sz];
		sol = "";
		rep(i,sz){
			r = q[i]-'a';
			arr[i]=r;
			if(r==-2) cpp=true;
			if(r<-2) java=true;
		}
		if(cpp && java) cout << "Error !" << endl;
		else{
			if(cpp){
				rep(i,sz){
					if(arr[i]==-2) flag=true;
					else{
						if(flag){
							sol += q[i]-32;
							flag=false;
						}else{
							sol += q[i];
						}
					}
				}
			}else{
				rep(i,sz){
					if(arr[i]<-2){
						sol += '_';
						sol += q[i]-32;
					}
				}
			}
			cout << sol << endl;
		}
	}
}