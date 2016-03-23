#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define TCASE int __T; cin >> __T; FOR(Tc,1,__T)
#define rep(i,n) for(int i=0; i<n; i++)
#define var(a,b) cout << a << " = " << b << endl;

int main()
{
	boost
	string word;
	int p,ans,fr,tmpr,tmpk,tr,tk,n;
	TCASE{
		cin >> word;
		n = word.length();
		tr = tk = tmpr = tmpk = ans = 0;
		rep(i,n) if(word[i]-'K') tr++; else tk++;
		rep(i,n){
			if(word[i]-'K'){
				tmpr++;
				fr = tr-tmpr+tmpk;
			}
			else{ 
				tmpk++; 
				if(tmpr>tmpk){
					tmpr=0;
					tmpk=1;
				}
				fr = max(tr+1,tr-tmpr+tmpk);
			}
			ans = max(fr,ans);
		}
		cout << max(tr,ans) << endl;
	}
}