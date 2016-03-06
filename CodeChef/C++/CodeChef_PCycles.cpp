#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define rep(i,n) FOR(i,0,n-1)

int main()
{
    boost;
    int n,p,nodes=0;
    vvi res;
    cin >> n;
    int arr[n],visited[n];
    rep(i,n){ cin >> arr[i]; visited[i]=0; }
    while(nodes<n){
        p=0;
        vi t;
        while(visited[p] && p<n) p++;
        t.push_back(p+1);
        while(visited[p]==0){
            visited[p]=1;
            p = arr[p]-1;
            nodes++;
            t.push_back(p+1);
        }
        res.push_back(t);
    }
    p = res.size();
    cout << p << endl;
    rep(i,p){
    	n = res.size();
    	rep(j,n) cout << res[i][j] << " ";
    	cout << endl;
    }
}