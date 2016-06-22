// 30 points solution

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
#define dbg_vec(x) tr(it,x) cout << *it << " "; cout << endl;

const int mod = 1000000007;
int arr[1005];
vi bs;

void init_vi(int f, int s){
	bs.clear();
	while(f){ bs.pb(f%2); f/=2; }
	s -= bs.size();
	rep(i,s) bs.pb(0);
	reverse(all(bs));
	return; 
}

int main(){
	boost;
	int n,m,s,pos;
	bool flag;
	tcase{
		cin >> n >> m >> s; s--;
		rep(i,m) cin >> arr[i];
		ull p = pow(2,m);
		rep(i,n){
			int ans = 0;
			rep(j,p){
				pos = s; flag = true;
				init_vi(j,m);
				rep(k,m){
					if(bs[k]) pos+=arr[k];
					else pos-=arr[k];
					if(pos<0 || pos>=n){ flag = false; break; }
				}
				if(pos==i && flag==true) ans++;
			}
			cout << ans << " ";
		}
		cout << endl;
	}
}