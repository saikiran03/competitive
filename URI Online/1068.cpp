#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(0);

int main(){
	boost;
	string exp, sol[2] = {"incorrect", "correct"};
	stack<char> sc; int l;
	while(cin >> exp){
		bool flag = true;
		l = exp.length();
		for(int i=0; i<l && flag; i++){
			if(exp[i]=='('){
				sc.push(exp[i]);
			}
			else if(exp[i]==')'){
				if(!sc.empty() && sc.top()=='(')
					sc.pop();
				else
					flag = false;
			}
		}
		while(!sc.empty()){
			sc.pop(); 
			flag = false;
		}
		cout << sol[flag] << endl;
	}
}