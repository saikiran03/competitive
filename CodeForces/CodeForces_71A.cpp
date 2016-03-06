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
	int test,size;
	string word;
	cin >> test;
	while(test--)
	{
		cin >> word;
		size = strlen(word);
		if(size>10)
		{
			cout << word[0] << size-2 << word[size-1] << endl;
		}
		else
		{
			cout << word << endl;
		}
	}	
	return 0;
}