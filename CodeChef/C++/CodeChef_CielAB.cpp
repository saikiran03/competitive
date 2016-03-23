#include <iostream>
using namespace std;

int main()
{
    int a,b,tmp;
    cin >> a >> b;
    tmp = a-b;
    if(tmp%10==9) tmp--;
    else tmp++;
    cout << tmp << endl;
}
