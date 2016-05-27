#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef map<int,int> mpii;
 
#define boost ios_base::sync_with_stdio(false); cin.tie(0);
#define tcase int _tc; cin >> _tc; while(_tc--)
#define rep(i,n) for(int i=0; i<n; i++)
#define repr(i,n) for(int i=n; i>=0; i--)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define RFOR(i,a,b) for(int i=a; i>=b; i--)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)
#define all(x) x.begin(), x.end()
#define mems(a,b) memset(a, (b), sizeof a)
#define mp make_pair
#define pb push_back
#define sz(a) (int)(a.size())
#define present(c,x) (c.find(x)!=c.end())
#define cpresent(c,x) (find(all(c),x) != c.end())
#define rf freopen("in.txt","r",stdin);
#define wf freopen("out.txt","w",stdout);
 
const int mod = 1000000007;
const int inf = INT_MAX;
const int pi = acos(-1.0);
const int EPS = 1e-9;
 
int arr[200005];
 
ll merge(int s, int m, int e){
	int p1=s, p2 = m+1, cont[e-s+1];
	ll inv = 0;
 
	while(p1<=m && p2<=e){
		if(arr[p1]<=arr[p2])
			{ cont[p1+p2-s-m-1] = arr[p1]; p1++; }
		else if(arr[p2]<arr[p1])
			{ cont[p1+p2-s-m-1] = arr[p2]; p2++; inv+=(m+1-p1); }
	}
 
	while(p1<=m){
		cont[p1+p2-s-m-1] = arr[p1];
		p1++;
	}
 
	while(p2<=e){
		cont[p1+p2-s-m-1] = arr[p2];
		p2++;
	}
 
	FOR(i,s,e)
		arr[i] = cont[i-s];
	return inv;
}
 
ll mergeSort(int s, int e){
	ll sol = 0;
	if(s<e){
		int mid = (s+e)/2;
		
		sol += mergeSort(s, mid);
		sol += mergeSort(mid+1, e);
		
		sol += merge(s, mid, e);
	}
	return sol;
}
 
int main(){
	boost;
	// rf; wf;
	tcase{
		int n;
		cin >> n;
		rep(i,n)
			cin >> arr[i];
 
		cout << mergeSort(0, n-1) << endl;
	}
}