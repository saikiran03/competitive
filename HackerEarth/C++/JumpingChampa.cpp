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
	int tc, city, q;
	long long int total;
	cin >> tc;
	while(tc--)
	{
		total = 0;
		cin >> city >> q;
		int heights[city];
		for(int i=0; i<city; i++) cin >> heights[i];
		sort(heights, heights+city);
		for(int i=0; i<city-1; i++) total += q*(long long int)(heights[i+1]-heights[i]);
		cout << total << endl;
	}
}