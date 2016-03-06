#include <iostream>
#include <math.h>
using namespace std;

#define scd(t) scanf("%d",&t);
#define ptlld(t) printf("%lld\n",t);
#define FOR(i,a,b) for(int i=a; i<=b; i++)

bool is_prime(int x){
    int l,r=2;
    if(x%r==0) return false;
    r++;
    l=sqrt(x)+1;
    while(r<=l){
        if(x%r==0) return false;
        r+=2;
    }
    return true;
}

int main(){
    int n;
    unsigned long long int b,r;
    scd(n);
    if(n==1) cout << 0 << endl;
    else{
        r=b=1;
        FOR(i,3,n){
            if(is_prime(i)) b*=2;
            r+=b;
        }
        ptlld(r);
    }
}
