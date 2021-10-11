#include<iostream>
using namespace std;
void func(){
    printf("hell");
}
int main(){
    bool x[16];//bool is not fundamental type in c
    cout<<sizeof(x);//16 not 2
    func();
    //func(2); // not an error in c but error in cpp

    //int new = 9; expected un-qualified id before new
    //int *p = malloc(10); invalid conversion from ‘void*’ to ‘int*’

    return 0;
}
