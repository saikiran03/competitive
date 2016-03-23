#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TCASE int __T; cin >> __T; while(__T--)
#define rep(i,n) FOR(i,0,n-1)

bool match(string fs, string ss){
	int lf,ls,i,j,mc=0;
	lf = fs.length();
	ls = ss.length();
	i = j= 0;
	while(i<lf && j<ls){
		if(fs[i]-'a' == ss[j]-'a'){ mc++; i++; }
		j++;
	}
	if(mc==lf) return true;
	else return false;
}

int main(){
	boost;
	string tc;
	int l,tmp;
	bool flag;
	TCASE{
		cin >> tc;
		l = tc.length();
		tmp = l/2;
		if(l%2) flag = match(tc.substr(0,tmp), tc.substr(tmp,l)) || match(tc.substr(tmp+1,l), tc.substr(0,tmp+1));	
		else flag = match(tc.substr(0,tmp), tc.substr(tmp,l));	
		if(flag) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}