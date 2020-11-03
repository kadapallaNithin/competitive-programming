#include<iostream>
#define INT_BITS (sizeof(int)<<3) //(sizeof(int)*8)
// make sure moves < INT_BITS
#define CLSH(value,moves) (value<<moves | (value >> (INT_BITS - moves)) )
#define CRSH(value,moves) (value>>moves | (value << (INT_BITS - moves)) )
// ** in above, value doesn't change
// be careful with signedness, overflow and side effects
using namespace std;
int main(){
    //binary in paranthesis
    uint x = 10;//10(1010)
    cout<<(x>>1)<<' '<<x<<endl;//5(101) 10(1010)
    cout<<(x<<2)<<' '<<x<<endl;//40(101000) 10(1010)
    x >>= 2;
    cout<<x<<endl; //2
    //overflow warning
    x >>= (-1);
    cout<<x<<endl;//unexpected! may be 0
    x = 30;//30(1 1110)
    cout<<(x>>=2)<<' '<<x<<endl;//7(111) 7(111)
    cout<<CRSH(x,2)<<' '<<x<<endl;//1100 0000 0000 0000 0000 0000 0000 0001 7(111)    
}
