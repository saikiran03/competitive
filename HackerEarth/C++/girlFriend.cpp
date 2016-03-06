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
	int size;
	cin >> size;
	int cats[size], cal[size];
	for(int i=0; i<size; i++) cin >> cats[i];
	for(int i=0; i<size; i++) cin >> cal[i];
	sort(cats, cats+size);
	sort(cal, cal+size);
	long long int finStr = 0;
	for(int i=0; i<size; i++) finStr += (long int)cal[i]*cats[i];
	cout << finStr << endl;
}