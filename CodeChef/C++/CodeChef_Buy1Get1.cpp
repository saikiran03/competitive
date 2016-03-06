#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    int test;
    long long int count;
    string jewels;
    cin >> test;
    while(test--)
    {
        int alpha[52] = {0};
        count = 0;
        cin >> jewels;
        for(int i=0; i<jewels.size(); i++) alpha[((int)jewels[i])-65]++;
        for(int i=0; i<52; i++)
        {
            if(alpha[i]%2) count += alpha[i]/2+1;
            else count += alpha[i]/2;
        }
        cout << count << endl;
    }
}
