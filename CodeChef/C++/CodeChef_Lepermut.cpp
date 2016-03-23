#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int test,size,localInv,totalInv,tmp;
	cin >> test;
	while(test--)
	{
		totalInv = 1;
		cin >> size;
		int perm[size];
		for(int i=0; i<size; i++) cin >> perm[i];
		for(int i=0; i<size; i++)
			for(int j=i+2; j<size; j++)
				if(perm[i]>perm[j])
				{
					totalInv = 0;
					break;		
				}
		if(totalInv) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}