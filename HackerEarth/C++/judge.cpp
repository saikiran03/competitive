#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> input, sol; 
	unsigned long long int t;
	freopen("debug_report.txt", "w", stdout);
	
	freopen("out.txt","r",stdin);
	for(int i=0; i<2000; i++){
		cin >> t;
		input.push_back(t);
	}
	
	freopen("sol.txt","r",stdin);
	for(int i=0; i<2000; i++){
		cin >> t;
		sol.push_back(t);
	}
	
	t = sol.size();
	int ms = 0;
	for(int i=0; i<t; i++){
		if(sol[i]!=input[i]){  ms++;
			cout << "Mismatch on " << i+1 << " line." << endl;
			cout << sol[i] << " " << input[i] << endl << endl;
		}
	}
	cout << "Total Mismatches : " << ms << endl;
}