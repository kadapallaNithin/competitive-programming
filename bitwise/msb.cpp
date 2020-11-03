#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define TYPE unsigned long
#define TYPE_BITS (sizeof(TYPE)<<3) //(sizeof(TYPE)*8) or (sizeof(TYPE)*sizeof(char))
#define ITH_BIT(x,i) ( x&(1<<i) )
#define MSB(x,msb) msb = 0;for(TYPE t = x; t>1; t >>= 1){ msb++;} //may be the best

/*
 N_MSB stands for Near Most Significant Bit i.e leftmost bit which is 1
 msb : strict upper bound for output
 example0 : N_MSB(10,7) := 4
 example1 : N_MSB(10,3) := 2
*/
#define N_MSB(x,msb) while( !( ITH_BIT(x,--msb) ) && msb > 0 );


//function calling overhead
int msb(TYPE x){
    TYPE t = x;
    int msb = 0;
    while(t>1){
        msb++;
        t >>= 1;
    }
    return msb;
}
/*
//not recomended
uint msb_test(uint n){
    uint x=1;
    uint i = 0;
    uint r = 0;
    while(i < 31){
        uint t = x << i;
        cout<<t<<'\t';
        if((x << ++i) && n){
            r = i;
        }
    }
    return r;
}*/
int main(){
//    uint a = 16;//f4294967295;
//    cout<<a<<' '<<msb_test(a);
    TYPE x;
    cin>>x;
    int msb = 7;
    N_MSB(x,msb);
    cout<<msb;
    N_MSB(x,msb);
    cout<<msb;
//    cout<<(127<<(-1));//right shift 1 := 63
    return 0;
}