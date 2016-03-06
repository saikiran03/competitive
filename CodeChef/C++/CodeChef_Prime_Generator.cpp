#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int test,low,up;
    cin >> test;
    while(test--)
    {
        cin >> low >> up;
        int stat[up-1];
        for(int i=0; i<up-1; i++)
        {
            stat[i] = 1;
        }
        cout << endl;
        int p1,p2;
        p1 = 2;
        p2 = 0;
        while(p1<int(sqrt(up))+1)
        {
            for(int i=p2+p1; i<up-1; i+=p1)
            {
                stat[i] = 0;
            }
            for(int i=p2; i<up-1; i++)
            {
                p2++;
                if(stat[p2])
                {
                    break;
                }
            }
            p1 = p2+2;
        }
        for(int i=0; i<up-1; i++)
        {
            if(stat[i]>low)
            {
                cout << i+2 << endl;
            }
        }
    }
}
