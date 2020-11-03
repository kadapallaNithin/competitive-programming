#include<bits/stdc++.h>
using namespace std;
void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
    if(next_permutation(arr,arr+n)){
        display(arr,n);
    }

}
int main(){
    int arr[]= {1,90,29,999,2,0};
    sort(arr,arr+6);
//    display(arr,6);
}