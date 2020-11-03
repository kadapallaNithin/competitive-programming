#include<iostream>
#define INT_BITS (sizeof(int)<<3) // (sizeof(int)*8)
#define ninf (1<<(INT_BITS -1) )
#define inf (~ninf)
#define uinf (~(unsigned int)0)
// warning : don't forget () in above declarations
// eg : cout<<ninf => cout<<1<<INT_BITS-1 // second << is not leftshift

// Note : ninf = inf + 1  = ~inf
//        inf  = ninf - 1 = ~ninf
using namespace std;
int main(){
    cout<<inf<<endl;
    cout<<ninf<<endl;
    cout<<inf+1<<endl;
    cout<<uinf;

    return 0;
}
