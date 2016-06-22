#include <bits/stdc++.h>
using namespace std;

#define inf 1000000007

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef pair<int,int> ii;

#define rf freopen("in.txt","r",stdin);
#define wf freopen("out.txt","w",stdout);
#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define tcase int __T; cin >> __T; while(__T--)
#define rep(i,n) for(int i=0; i<n; i++)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)
#define pb push_back
#define all(x) x.begin(),x.end()

int nodddiv(int n){
	int cnt=0;
	if(n==1) return 1;
	FOR(i,1,sqrt(n)){
		if(n%i==0){
			if(i%2==1 && i==n/i) cnt+=i;
			else{
				if(i%2==1){ cnt+=i;}
				if((n/i)%2==1){ cnt+=(n/i);}	
			}
		}
	}
	return cnt;
}

int main(){
	boost;
	int l,r;
	ull cnt;
	// cout << nodddiv(9) << endl;
	tcase{
		cnt=0;
		cin >> l >> r;
		FOR(i,l,r){ cnt+=nodddiv(i); /*cout << nodddiv(i) << endl;*/}
		cout << cnt << endl;
	}
}