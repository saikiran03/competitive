#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t,tc;
	string q,charset;
	map<char,char> hash;
	cin >> tc >> charset;
	hash['_'] = ' ';
	for(int i=0; i<26; i++){ hash['a'+i] = charset[i]; hash['a'+i-32] = charset[i]-32; }
	while(tc--){
		cin >> q;
		t = q.length();
		for(int i=0; i<t; i++){
			if((q[i]-'A'<26 && q[i]-'A'>=0) || (q[i]-'a'<26 && q[i]-'a'>=0) || (q[i]-'_'==0)) cout << hash[q[i]]; 
			else cout << q[i];	
		} 
		cout << endl;
	}
}