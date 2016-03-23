#include <iostream>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    tie.cin(0);
    int words, length;
    cin >> words;
    while(words--)
    {
        cin >> length;
        if(length%2) cout << length-1;
        else cout << length;
        cout << endl;
    }
}
