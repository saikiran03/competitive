#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int binary_search(int arr[], int size, int find)
{
	int start, end, mid;
	start = 0;
	end = size-1;
	mid = (start+end)/2;
	while(start<end && arr[mid]!=find)
	{
		if(arr[mid]>find) end = mid-1;
		else start = mid+1;
		mid = (start+end)/2;
	}
	if(arr[mid]==find) return mid;
	else return -1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int test, size, posInit, lengthInit;
	cin >> test;
	while(test--)
	{
		cin >> size;
		int lengths[size];
		for(int i=0; i<size; i++) cin >> lengths[i];
		cin >> posInit;
		posInit = lengths[posInit-1];
		sort(lengths,lengths+size);
		posInit = binary_search(lengths,size,posInit); 
		cout << posInit << endl;
	}
}