#include <bits/stdc++.h>
using namespace std;
 
#define boost ios_base::sync_with_stdio(false); cin.tie(0);
#define tcase int _tc; cin >> _tc; while(_tc--)
#define rep(i,n) for(int i=0; i<n; i++)
 
int c[55], v[55];
 
bool valid(int n){
	rep(i,n)
		if(v[i]==i)
			return false;
 
	return true;
}
 
int main(){
	boost;
	int n, tv;
	bool flag;
 
	tcase{
 
		flag = true; tv = 0;
		cin >> n;
 
		rep(i,n){
			cin >> c[i];
			tv += c[i];
 
			if(c[i]>=n)
				flag = false;
		}
		if(tv!=n) flag = false;
 
		if(flag){
			int p=0;
 
			rep(i,n)
				for(int j=c[i]; j>0; j--, p++)
					v[p] = i;
 
			while(!valid(n))
				rep(i,n)
					rep(j,n)
						if(i==v[i] && i!=j && i!=v[j] && j!=v[i])
							swap(v[i],v[j]);
 
			rep(i,n) 
				cout << v[i]+1 << " ";
			cout << endl; 
		}
 
		else
			cout << -1 << endl;
	}
}