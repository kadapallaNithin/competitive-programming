#include<bits/stdc++.h>
using namespace std;
long long divide(long long dividend, long long divisor) 
{
    bool neg = (dividend<0)^(divisor<0);
    if(dividend < 0){
        dividend = -dividend;
    }
    if(divisor < 0){
        divisor = -divisor;
    }
    long long divisor_multiple = divisor;
    int p = 0;
    while(dividend >= divisor_multiple){
        divisor_multiple <<= 1;
        p++;
    }
    divisor_multiple >>= 1;
    long long ans = 0;
    while(p-- > 0){
        ans <<= 1;
        if(dividend >= divisor_multiple){
            ans |= 1;
	        dividend -= divisor_multiple;
        }
        divisor_multiple >>= 1;
    }
    /*
      // Another approach
      // Initialize the quotient
      long long quotient = 0, temp = 0;
    
      // test down from the highest bit and
      // accumulate the tentative value for
      // valid bit
      for (int i = 31; i >= 0; --i) {
    
        if (temp + (divisor << i) <= dividend) {
          temp += divisor << i;
          quotient |= 1LL << i;
        }
      }
    
    */
    if(neg){
        return -ans;
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long divisor,dividend;
        cout<<divide(dividend,divisor)<<'\n';
    }
    return 0;
}