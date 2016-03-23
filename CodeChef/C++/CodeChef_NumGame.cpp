#include <iostream>
using namespace std;

int main()
{
    int games, n;
    scanf("%d\n",&games);
    while(games--)
    {
        scanf("%d\n",&n);
        if(n&1) printf("BOB\n");
        else printf("ALICE\n");
    }
}
