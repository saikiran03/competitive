#include <iostream>
using namespace std;

int main()
{
    int test, cubes, length;
    cin >> test;
    while(test--)
    {
        cin >> length >> cubes;
        int heights[length], max=0;
        for(int i=0; i<length; i++)
        {
            cin >> heights[i];
            if(max<heights[i]) max = heights[i];
        }
        for(int i=0; i<length; i++) cubes -= max-heights[i];
        if(cubes%length) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
}
