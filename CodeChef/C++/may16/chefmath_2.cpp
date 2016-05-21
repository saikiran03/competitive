#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> ii;

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

const int mod = 1e9+7;
int chef[40] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155, 165580141};

int numberOfWays(int x, int k, int f){
	// cout << x << " " << k << " " << f << endl;
	if(chef[f]*k < x) return 0;
	if(x<0) return 0;
	if(k==0){
		if(x==0) return 1;
		else  return 0;
	}
	
	ll ans = 0;
	for(int i=39; i>=0; i--){
		ans += max(0,numberOfWays(x-chef[i], k-1, i));
		ans %= mod;
	}
	return (int)ans;
}

int main(){
	boost;
	rf; wf;
	int x,k;
	tcase{
		cin >> x >> k;
		cout << numberOfWays(x,k,40) << endl;
	}
}