#include <iostream>
using namespace std;

int ispow(int num)
{
    if(num <2)
    {
        return 0;
    }
    while(num!=1)
    {
        if(num%2)
        {
            return 0;
        }
        num /= 2;
    }
    return 1;
}

int main()
{
    int test,a,b,steps;
    cin >> test;
    while(test--)
    {
        cin >> a >> b;
        steps = 0;
        while(a!=b)
        {
            if(a==1)
            {
                a *= 2;
                steps++;
                continue;
            }
            if(a%2)
            {
                a--;
                a /= 2;
            }
            else
            {
                if(ispow(a))
                {
                    if(a>b)
                    {
                        a /= 2;
                    }
                    else
                    {
                        a *= 2;
                    }
                }
                else
                {
                    a /= 2;
                }
            }
            steps++;
        }
        cout << steps << endl;
    }
}
