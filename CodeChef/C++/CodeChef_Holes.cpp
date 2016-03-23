#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int getHole(string text)
{
    int hole = 0;
    int size = text.length();
    for(int i=0; i<size; i++)
    {
        if(text[i]=='A') hole += 1;
        else if(text[i]=='B') hole += 2;
        else if(text[i]=='D') hole += 1;
        else if(text[i]=='O') hole += 1;
        else if(text[i]=='R') hole += 1;
        else if(text[i]=='Q') hole += 1;
        else if(text[i]=='P') hole += 1;
    }
    return hole;
}

int main()
{
    int test;
    string text;
    cin >> test;
    while(test--)
    {
        cin >> text;
        cout << getHole(text) << endl;
    }
}
