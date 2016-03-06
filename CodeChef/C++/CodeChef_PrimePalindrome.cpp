#include <iostream>
#include <math.h>
using namespace std;

int isPalin(int num)
{
  int ntemp,temp=0;
  ntemp = num;
  while(num)
  {
    temp *= 10;
    temp += num%10;
    num /= 10;
  }
  return temp == ntemp;
}

int isPrime(int num)
{
  for(int j=2; j<sqrt(num); j++)
  {
    if(num%j==0)
    {
      return 0;
    }
  }
  return 1;
}

int main()
{
  int num,flag=1;
  cin >> num;
  while(flag)
  {
    if(isPalin(num))
    {
      if(isPrime(num))
      {
        flag=0;
        break;
      }
    }
    num++;
  }
  cout << num;
}
