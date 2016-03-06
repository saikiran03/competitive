#include <bits/stdc++.h>
using namespace std;

int getval(char s){
	int tmp;
	tmp = s-'a';
	if(tmp==12) return 1000;
	else if(tmp==2) return 100;
	else if(tmp==23) return 10;
	else return 1;
}

int conv(string num){
	int len, tmp, tmp2, flag, res = 0;
	len = num.length();
	flag = 0;
	for(int i=0; i<len; i++){
		tmp = num[i]-'0';
		if(tmp>9){
			flag=1;
			tmp2 = tmp;
		}
		else{
			if(flag) tmp2 *= getval(num[i]);
			else tmp2 = getval(num[i]);
			flag = 0;
		}
		if(flag==0) res+=tmp2;
	}
	return res;
}

int main(){
	int tc,n1,n2;
	string num1, num2;
	cin >> tc;
	while(tc--){
		cin >> num1 >> num2;
		n1 = conv(num1);
		n2 = conv(num2);
		cout << n1 << endl;
		cout << n2 << endl;
	}
}
