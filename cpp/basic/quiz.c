#include<stdio.h>
#include<stdlib.h>
void func(){
    printf("hello");
}
void func_v(void){
    printf("hello world");
}
//void main(){// if return 0 is there, warning. if no error
int main(){
    //bool x;
    func();
    func(5);//not an error prints hello
    //func_v(2);// error too many arguemnts to func_v
    int* p = malloc(10);// error in cpp
    *p = 10;
    printf("%d",*p);

    const int j = 20;
    int *ptr = &j; //initialization discards ‘const’ qualifier from pointer target type
    printf("value : %d",*ptr);

//    return 0;
}
