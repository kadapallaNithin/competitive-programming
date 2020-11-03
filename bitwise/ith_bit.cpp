#include<iostream>
using namespace  std;
#define SET_ITH(x,i)    x |=  (1<<i)
#define RESET_ITH(x,i)       x &= ~(1<<i)
#define ITH_BIT(x,i)         x &   (1<<i)
#define TOGGLE_ITH(x,i)      x ^=  (1<<i)
void set_ith_bit(unsigned int& x, int i){
    x |= (1<<i);
}
void reset_ith_bit(unsigned int& x, int i){
    x &= ~(1<<i);
}
bool ith_bit(unsigned int x, int i){
    return x&(1<<i);//(x>>i)%2; % is slower
}
void toggle_ith_bit(unsigned int& x, int i){
    x ^= (1<<i);
}
void print_bits(unsigned int i){
    for(int j=31;j>-1; j--){
        cout<<ith_bit(i,j);
    }
    cout<<endl;
}
int main(){
    for(unsigned int i=0; i<64; i++){
        int t = i;
        cout<<' '<<i<<endl;
        print_bits(i);
        SET_ITH(i,2);
//        set_ith_bit(i,2);
        print_bits(i);
        RESET_ITH(i,4);
//        reset_ith_bit(i,4);
        print_bits(i);
        i = t;
    }
}