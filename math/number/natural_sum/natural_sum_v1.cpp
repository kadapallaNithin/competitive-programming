#include<bits/stdc++.h>
using namespace std;
int main(){
    // 2q = n(n+1) => n*n + n - 2q = 0
    // n = (-1+sqrt(1-4*(-2*q)))/2
    // n = (-1 + sqrt(1+8*q))/2
    int t;
    cin>>t;
    for(int ti=0; ti<t; ti++){
        long q;
        cin>>q;
        double n = (-1 + sqrt(1+8*q))/2;
        if(n == (long)n){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
 
}
