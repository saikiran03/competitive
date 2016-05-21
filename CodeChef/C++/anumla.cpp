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

int arr[35005];
int sol[16];
vi cache;

void update(int n){
	
}

int main(){
	boost;
	// rf; wf;
	int n,p,r=0;
	tcase{
		cin >> n;
		p = pow(2,n);
		rep(i,p) cin >> arr[i];
		sort(arr, arr+p);
		FOR(i,0,n-1){
			if(i<2){ 
				sol[i] = arr[i+1];
				r = i+1;
				update(i+1);
			}else{
				while(r<*vi.begin())
			}
		}
		rep(i,n) cout << sol[i] << " "; cout << endl;
	}
}