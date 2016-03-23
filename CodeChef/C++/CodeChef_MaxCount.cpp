#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    int test,length;
    cin >> test;
    while(test--)
    {
        cin >> length;
        int arr[length],count,maxCount,num,maxNum;
        for(int i=0; i<length; i++) cin >> arr[i];
        sort(arr,arr+length,greater<int>());
        count = 0;
        maxCount = 0;
        num = arr[0];
        maxNum = num;
        for(int i=0; i<length; i++)
        {
            if(arr[i] == num)
            {
                count++;
                if(count>=maxCount)
                {
                    maxCount = count;
                    maxNum = num;
                }
            }
            else
            {
                num = arr[i];
                count = 1;
            }
        }
        cout << maxNum << " " << maxCount << endl;
    }
}
