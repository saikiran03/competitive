#include <iostream>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    tie.cin(0);
    int t, k, tmp, result=0;
    cin >> t >> k;
    while(t--)
    {
        cin >> tmp;
        if(tmp%k==0) result++;
    }
    cout << result << endl;
}
