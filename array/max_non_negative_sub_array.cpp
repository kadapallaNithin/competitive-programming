#include<bits/stdc++.h>
using namespace std;
vector<int> findSubarray(int a[], int n) {
    int max_l = 0, max_r = 0;
    long long max_sum = numeric_limits<int>::min();
    int left = 0,right=0;
    long long curr_sum = 0;
    for(int i=0; i<n; i++){
        if(a[i]<0){
            left = i+1;
            right = i+1;
            curr_sum = 0;
        }else{
            curr_sum += a[i];
            right = i;
            if((a[i] == 0 && curr_sum == max_sum) || curr_sum > max_sum){
                max_sum = curr_sum;
                max_r = right;
                max_l = left;
            }
        }
    }
    vector<int> ans;
    if(max_sum < 0){
        ans.push_back(-1);
    }else{
	    for(int i=max_l; i<=max_r; i++){
	        ans.push_back(a[i]);
	    }
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++){
            cin>>a[i];
        }
        auto ans = findSubarray(a,n);
        for(auto &ele:ans){
            cout<<ele<<' ';
        }
        cout<<'\n';
    }
    return 0;
}