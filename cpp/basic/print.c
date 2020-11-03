#include<stdio.h>
int main(){
    printf("%d",10);//decimal number
    printf("%4d %20d\n",19919,89);//decimal #s 'atleast' 4 char and atleast 20 char wide resp
    printf("%f,%4f,%.3f,%2.4f",9.0,23.13,9.2,2.3);
    printf("\n%10f",1.0);// 10 char wide including . and 6 zeroes after .
    printf("\n%8.2f",39.9003);
    int z = printf("\n%f",0.123456789);
    printf("%d",z);
    return 0;
}
