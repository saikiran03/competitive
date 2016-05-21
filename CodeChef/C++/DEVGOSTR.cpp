#include <bits/stdc++.h>
using namespace std;
 
#define inf 1e9+7
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef pair<int,int> ii;
 
#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define tcase int __T; cin >> __T; while(__T--)
#define rep(i,n) for(int i=0; i<n; i++)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)
#define pb push_back
#define all(x) x.begin(),x.end()
 
bool good_str(string a){
	int i,j,k,d,l = a.length();
	i = j = k = 0;
	d = 1;
	while(i<l-2){
		j = i+d; k = j+d;
		while(k<l){
			if(a[i]==a[j] && a[j]==a[k]) return false;
			d++;
			j+=d; k+=d;
		}
		i++; d=1;
	}
	return true;
}
 
int hamming_dist(string a, string b){
	int r=0 ,l = a.length();
	rep(i,l) if(a[i]-b[i]) r++;
	return r;
}
 
vi base3(int n, int sz){
	vi res;
	while(n){
		res.pb(n%3);
		n/=3; sz--;
	}
	while(sz>0){ res.pb(0); sz--;}
	return res;
}

vi base2(int n, int sz){
	vi res;
	while(n){
		res.pb(n%2);
		n/=2; sz--;
	}
	while(sz>0){ res.pb(0); sz--;}
	return res;
}

int main(){
	boost;
	int a,k,sl,res;
	string s;
	char lt[] = {'a','b','c'};
	tcase{
		cin >> a >> k;
		cin >> s;
		res = 0;
		sl = s.length();
		if(a==1){
			if(sl>2) cout << 0 << endl;
			else{
				int sol = 0;
				if(sl==1){
					if(hamming_dist("a",s)<=k) sol=1;
					else sol=0;
				}else if(sl==2){
					if(hamming_dist("aa",s)<=k) sol=1;
					else sol=0;
				}
				cout << sol << endl;
			}
		}else{
			ull p = pow(a,sl);
			if(a==3){
				FOR(i,1,p){
					string tmp;
					vi t(base3(i,sl));
					tr(it,t) tmp += lt[*it];
					if(good_str(tmp) && hamming_dist(s, tmp)<=k) res++; 
				}	
			}else{
				FOR(i,1,p){
					vi t(base2(i,sl));
					string tmp;
					tr(it,t) tmp += lt[*it];
					if(good_str(tmp) && hamming_dist(s, tmp)<=k) res++;
				}
			}
			cout << res << endl;
		}
	}
} 