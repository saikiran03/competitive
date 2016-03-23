#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int test,n;
	cin >> test;
	while(test--)
	{
		cin >> n;
		int flag,sqn,y,x = 1;
		vector<int> factors;
		flag = 0;
		sqn = (int)sqrt(n)+1;
		for(int i=0; i<(int)sqrt(n)+1; i++) if(n%i==0) factors.push_back(i);
		while(x<=sqn)
		{
			y = (int)sqrt(n-x*x);
			if(y*y+x*x==n){flag = 1; cout << x << "," << y << endl; break;}
			x++;
		}
		if(flag) cout << n << " , YES" << endl;
		else cout << n << " , NO" << endl;
	}
}