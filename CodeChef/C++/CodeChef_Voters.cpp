#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main()
{
	int size1, size2, size3, length;
	cin >> size1 >> size2 >> size3;
	length = size1+size2+size3;
	int list[length];
	for(int i=0; i<length; i++) cin >> list[i];
	sort(list,list+length);
	int p = 0;
	vector<int> result;
	while(p<length-1)
	{
		if(list[p]==list[p+1] && list[p-1]!=list[p])
		{
			result.push_back(list[p]);
			p+=2;
		}
		else
		{
			p++;
		}
	}
	length = result.size();
	cout << length << endl;
	for(int i=0; i<result.size(); i++) cout << result[i] << endl;
}