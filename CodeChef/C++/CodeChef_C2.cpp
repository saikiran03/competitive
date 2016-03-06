#include <iostream>
#include <math.h>
using namespace std;

long long int power(int base, int power, int mod)
{
    long long int result = 1;
    while(power--) result *= base;
    return result%mod;
}

long long int getSum(int n, int p, int k)
{
    long long int sum = 0;
    for(int i=1; i<=n; i++) sum += power(n,p,k);
    return sum;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int base,power,mod;
        cin >> base >> power >> mod;
        cout << getSum(base,power,mod) << endl;
    }
}
