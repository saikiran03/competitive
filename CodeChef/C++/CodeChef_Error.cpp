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
	int test,flag;
	string binary;
	cin >> test;
	while(test--)
	{
		flag = 0;
		cin >> binary;
		if(binary.find("101")!=-1 || binary.find("010")!=-1) flag =1;
		if(flag) cout << "Good" << endl;
		else cout << "Bad" << endl;
	}
	return 0;
}