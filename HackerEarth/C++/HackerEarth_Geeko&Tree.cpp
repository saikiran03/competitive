//BigInt class implementation
#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(i,n) for(int i=0; i<n; i++)
#define tcase int __TC; cin >> __TC; while(__TC--)

class BigInt{
public:
    char val[5000] = {0};
    int mInd;
    bool isZero;

    BigInt(int n){
        if(n==0) isZero = true;
        else{
            isZero = false;
            mInd = -1;
            while(n>0){
                mInd++;
                val[mInd] = n%10;
                n /= 10;
            }
        }
    }

    BigInt(const BigInt& bi){
        mInd = bi.mInd;
        isZero = bi.isZero;
        rep(i,mInd+1) val[i] = bi.val[i];
    }

    void print(){
        if(isZero) cout << "0" << endl;
        else{
            for(int i=mInd; i>=0; i--) cout << val[i];
            cout << endl;
        }
    }

    void sum(){
        int s=0;
        for(int i=mInd; i>=0; i--) s+=(int)val[i];
        cout << s << endl;
    }

};

BigInt zero(0);
BigInt one(1);

BigInt operator+(BigInt num1, BigInt num2){
    if(num1.isZero) return BigInt(num2);
    if(num2.isZero) return BigInt(num1);

    BigInt num3 = zero;
    num3.isZero = false;
    int carry=0, i=0;
    for(int i=0; i<=num1.mInd || i<=num2.mInd; i++){
        num3.val[i] = carry + num1.val[i] + num2.val[i];
        carry = num3.val[i]%10;
        num3.val[i]%=10;
    }
    if(carry!=0){
        num3.val[i] = carry;
        i++;
    }
    num3.mInd = i-1;
    cout << "DD" << endl;
    return num3;
}

BigInt operator-(BigInt num1, BigInt num2){
    if(num2.isZero) return BigInt(num1);

    BigInt num3 = zero;
    num3.isZero = false;
    int carry=0,i=0;
    for(i=0; i<=num1.mInd; i++){
        num3.val[i] = num1.val[i] - num2.val[i] - carry;
        if(num3.val[i]<0) { num3.val[i] = 10 + num3.val[i]; carry=1; }
        else carry=0;
    }
    i--;
    while(num3.val[i]==0) i--;
    num3.mInd=i;
    return num3;
}

BigInt operator*(BigInt num1, BigInt num2){
    if(num1.isZero || num2.isZero) return zero;

    BigInt num3 = zero, temp=zero;
    num3.isZero=false;
    temp.isZero=false;
    int carry=0;
    for(int i=0; i<=num1.mInd; i++){
        int j=0;
        for(j=0; j<=num2.mInd; j++){

            int t = num3.val[i+j]+ (num1.val[i]*num2.val[j]) + carry;
            carry = t/10;
            num3.val[i+j] = t % 10;
        }

        while(carry > 0){
            num3.val[i+j] = num3.val[i+j]+carry;
            carry = num3.val[i+j]/10;
            num3.val[i+j]= num3.val[i+j]%10;
            j++;
        }
    }

    int k = num1.mInd + num2.mInd + 1;

    while(num3.val[k] == 0 )
    k--;

    num3.mInd = k;
    return num3;
}

BigInt operator^(BigInt num1, int k){

    if(k==0) return one;
    if(k==1) return BigInt(num1);

    BigInt half = num1^(k/2);

    if(k%2==1) return half*half*num1;
    else return half*half;
}

BigInt operator/(BigInt num1, int k){

    if(k==1) return BigInt(num1);

    BigInt ans=zero;
    ans.isZero=false;
    int rem=0;

    for(int i=num1.mInd; i>=0; i--){

        int t = (10*rem + num1.val[i]);
        rem = t%k;
        ans.val[i] = t/k;
    }

    int k1 = num1.mInd;
    while( ans.val[k1] == 0 )
    k1--;

    ans.mInd = k1;
    return ans;

}

int main(){
    boost;
    long long k,n;
    tcase{
        cin >> k >> n;
        BigInt kk(k);
        BigInt res = kk^(n+1);
        res = res-1;
        res = res/(k-1);
        res.sum();
    }
}
