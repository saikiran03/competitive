#include <iostream>
#include <string>
using namespace std;

int main()  
{
    int test;
    string a,b,temp;
    cin >> test;
    while(test--)
    {
        cin >> a;
        cin >> b;
        int swap,index = 0;
        int len = a.length();
        swap = 0;
        temp = a;
        if(temp.at(index)=="#")
        {
        	temp = b;
        }
        if(temp.at(index)=="#")
        {
        	cout << "NO" << endl;
        }
        else
        {
        	while(index<len)
	        {
	        	if(temp.at(index)=="#")
	        	{
	        		if(temp==a)
	        		{
	        			temp = b;
	        		}
	        		else
	        		{
	        			temp = a;
	        		}
	        		index++;
	        		if(temp.at(index)=="#")
	        		{
	        			cout << "NO" << endl;
	        			break;
	        		}
	        		else
	        		{
	        			swap++;
	        		}
	        	}
	        }
        }
        if(index==len-1)
        {
        	cout << "YES" << endl;
        	cout << swap << endl;
        }
    }
}
