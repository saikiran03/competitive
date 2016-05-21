#include <bits/stdc++.h>
using namespace std;

#define inf 1000000007

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<string> vs;
typedef pair<int,int> ii;

#define rf freopen("in.txt","r",stdin);
#define wf freopen("out.txt","w",stdout);
#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define RFOR(i,a,b) for(int i=a; i>=b; i--)
#define tcase int __T; cin >> __T; while(__T--)
#define rep(i,n) for(int i=0; i<n; i++)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)
#define pb push_back
#define all(x) x.begin(),x.end()

char integers[10] = {'0','1','2','3','4','5','6','7','8','9'};

//school grade multiplication algorithm;
string mul(string a, string b){
	string res;
	int al=a.length(), bl=b.length(), carry=0;
	int arr[al+bl];
	rep(i,al+bl) arr[i] = 0;
	rep(i,bl) rep(j,al) arr[i+j+1] += (a[j]-'0')*(b[i]-'0');
	RFOR(i,al+bl-1,0){
		arr[i] += carry;
		carry = arr[i]/10;
		arr[i] %= 10;
	}
	carry=0;
	while(carry<al+bl && arr[carry]==0) carry++;
	while(carry<al+bl){ res += integers[arr[carry]]; carry++;}
	return res;
}

int compare(string a, string b){
	int la=a.length(),lb=b.length(); 
	if(la>lb) return 1;
	else if(la<lb) return -1;
	else{
		rep(i,la){
			if(a[i]-b[i]<0) return -1;
			else if(a[i]-b[i]>0) return 1;
		}
	}
	return 0;
}

string add(string a, string b){
	string res;
	int mx,mn,la=a.length(),lb=b.length();
	mx = max(la,lb);
	mn = min(la,lb);
	int n[mx+1];
	rep(i,mx+1) n[i]=0;
	int i=0,c=0;
	while(i<mn){
		n[i] = c + (a[i]-'0') + (b[i]-'0');
		c = n[i]/10;
		n[i] %= 10; i++; 
	}
	if(mx==la){
		while(i<mx){
			n[i] = c + (a[i]-'0');
			c=0; i++;	
		}
	}else{
		while(i<mx){
			n[i] = c + (b[i]-'0');
			c=0; i++;	
		}
	}
	i=0; while(n[i]==0) i++;
	rep(i,mx+1) res+=integers[n[i]];
	return res;
}

//school grade square root algorithm
string big_sqrt(string num){
	int t,i=0,l = num.length();
	vs st;
	string root,curdiv,curval;
	if(l%2){ st.pb(num.substr(0,1)); i++; }
	while(i<l){
		st.pb(num.substr(i,2));
		i+=2;
	}
	tr(it,st){
		t = 0;
		while(compare(mul(curdiv+integers[t],integers[t]), *it)<=0) t++; t--;
		root += t;
	}
	tr(it,st) cout << *it << " "; cout << endl;
	return "";
}

int main(){
	boost;
	string num;
	tcase{
		cin >> num;
		cout << big_sqrt(num) << endl;
	}
	// cout << add("25","25");
}