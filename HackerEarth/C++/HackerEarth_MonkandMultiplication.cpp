#include <iostream>
#include <queue>
#include <stack>
using namespace std;

typedef long long ll;
#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(i,n) for(int i=0; i<n; i++)

int main()
{
	boost;
	int n,t;
	priority_queue<int> pq;
	stack<int> q;
	ll res;
	cin >> n;
	rep(i,n){
		res = 1;
		cin >> t;
		pq.push(t);
		if(i<2) cout << -1 << endl;
		else{
			rep(i,3){
				res*=pq.top();
				q.push(pq.top());
				pq.pop();
			}
			rep(i,3){
				pq.push(q.top());
				q.pop();
			}
			cout << res << endl;
		}
	}
}