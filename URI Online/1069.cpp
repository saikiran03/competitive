#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(0);
#define tcase int _tc; cin >> _tc; while(_tc--)
#define rep(i,n) for(int i=0; i<n; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)
#define all(x) x.begin(), x.end()
#define mp make_pair
#define pb push_back
#define rf freopen("in.txt","r",stdin);
#define wf freopen("out.txt","w",stdout);

int main(){
	boost;
	// rf; wf;
	string s;
	int l, dms;
	stack<char> sc;
	tcase{
		dms = 0;
		cin >> s; 
		l = s.length();
		rep(i,l){
			if(s[i]-'.'){
				if(sc.top()-'<'==0 && s[i]-'>'==0){
					sc.pop();
					dms++;
				}
			}
		}
		while(!sc.empty())
			sc.pop();
		cout << dms << endl;
	}
}