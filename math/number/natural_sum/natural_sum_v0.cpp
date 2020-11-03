#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//long
/*
 * Given q,
   print "Yes" if it can be expressed as sum of first k (k any integer).
   print "No"  otherwise

 * Input : t - # of testcases
           q for each testcase
 */
int main() {
    // 2q = n(n+1) => n*n + n - 2q = 0
    // n = (-1+sqrt(1-4*(-2*q)))/2
    // n = (-1 + sqrt(1+8*q))/2
    int t;
    cin>>t;
    for(int ti=0; ti<t; ti++){
        long q;
        cin>>q;
        cout<<q;
        if(q > 0){
            q = 2*q;
            for(int i=1; i<q; i++){
                long x = i*(i+1);
                if(x == q){
                    cout<<"Yes\n";
                    break;
                }else if(x > q){
                    cout<<"No\n";
                    break;
                }
            }
        }else{
            cout<<"No\n";
        }
    }
    return 0;
}
