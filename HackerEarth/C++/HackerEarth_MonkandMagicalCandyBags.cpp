#include <bits/stdc++.h>
using namespace std;

#define inf 1000000007

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

int main(){
	boost;
	tcase{
		int n,k;
		ull s=0,t;
		priority_queue<ull> pq;
		rep(i,n){
			cin >> t;
			pq.push(t);
		}
		rep(i,k){
			t = pq.top();
			s += t;
			pq.push(t/2);
			pq.pop();
		}
		cout << s << endl;
	}
}