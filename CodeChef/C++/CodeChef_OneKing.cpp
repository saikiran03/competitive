#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
typedef pair<int,int> p;
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int N,i,a,b,cnt=0,l=1000000000;
        vector<p> v;
        scanf("%d",&N);
        for(i=0;i<N;i++)
        {
             scanf("%d%d",&a,&b);
             v.push_back(p(b,a));
             l = min(a,l);
        }
        l--;
        sort(v.begin(),v.end());
        for(i=0;i<N;i++)
        {
             if(v[i].second > l)
             {
                  cnt++;
                  l=v[i].first;
             }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
 