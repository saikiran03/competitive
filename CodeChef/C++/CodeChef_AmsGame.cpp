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

int hcf(int a, int b)
{
	int tmp;
	while(a!=0)
	{
		tmp = a;
		a = b%a;
		b = tmp;
	}
	return b;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int test,size,min;
	cin >> test;
	while(test--)
	{
		cin >> size;
		int arr[size],gcd;
		for(int i=0; i<size; i++) cin >> arr[i];
		gcd = arr[0];
		for(int i=0; i<size; i++) gcd = hcf(gcd,arr[i]);
		cout << gcd << endl;
	}	
	return 0;
}