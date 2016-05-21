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

int main(){
	boost;
	int n,m,t;
	ull s=0;
	priority_queue<int> pq;
	cin >> n >> m;
	rep(i,n){
		cin >> t;
		pq.push(t);
	}
	rep(i,m){
		s+=pq.top();
		pq.top() = pq.top()-1;
	}
	cout << s << endl;
}