#include<bits/stdc++.h>
using namespace std;
vector<int> alternateSort(int arr[], int n)
{
    sort(&arr[0],&arr[n-1]+1);
    vector<int> sol;
    int low = 0, high = n-1;
    int i = 0;
    while(low <= high && i < n){
        if(i%2 == 0){
            sol.push_back(arr[high--]);
        }else{
            sol.push_back(arr[low++]);
        }
        i++;
    }
    return sol;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        vector<int> sol = alternateSort(arr,n);
        for(auto a:sol){
            cout<<a;
        }
    }
    return 0;
}