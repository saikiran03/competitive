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

int common_ancestor(int u, int v){
	if(u==v) return u;
	else return common_ancestor(min(u,v), max(u,v)/2);
}

string up_path(int u, int ca){
	string path;
	while(u!=ca){
		if(u%2) path+="3";
		else path+="2";
		u/=2;
	}
	reverse(all(path));
	return path;
}

int main(){
	boost;
	int n,u,v,ca,height,height2,t,q1,q2,r1,r2;
	string path1, path2;
	tcase{
		cin >> n >> u >> v;
		height2 = height = 0; 
		ca = common_ancestor(u,v); 
		t=min(u,v); v = max(u,v); 
		u=t;
		while(t!=ca){ t/=2; height++;} 
		t=v;
		while(t!=ca){ t/=2; height2++;} 
		path1 = up_path(u,ca);
		path2 = up_path(v,ca);
		q1=pow(2,height); r1=r2=0;
		q2 = pow(2,height2);
		tr(it,path1){
			r1*=2;
			if(*it-'2') r1++;
		}
		tr(it,path2){
			r2*=2;
			if(*it-'2') r2++;
		}
		cout << min((n-r1)/q1,(n-r2)/q2) << endl;
	}
}