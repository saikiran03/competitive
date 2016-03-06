#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef unsigned long long int ull;
#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(i,n) for(int i=0; i<n; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define tcase int __TC; cin >> __TC; while(__TC--)
#define pb push_back
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)
#define all(c) c.begin(),c.end()
#define sz(j) int((j).size())

int main(){
    boost;
    tcase{
        vi h,fs;
        int n,f,t=1,sol=0;
        pair<vi::iterator, vi::iterator> bounds;
        cin >> n >> f;
        rep(i,n){ cin >> sol; h.pb(sol); }
        sort(all(h));
        while(t<h[n-1]){ fs.pb(t); t*=f;}
        rep(i,n) tr(it,fs){
            bounds = equal_range(h.begin(),h.begin()+i,arr[i]/(*it));
            sol += bounds.second-bounds.first;
        }
        cout << sol << endl;
        fs.clear();
    }
}
