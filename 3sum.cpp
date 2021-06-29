#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> sub_arr(vector<int>&nums){
    int n=nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>>arr;
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]){
            continue;
        }
        int l=i+1,r=n-1;
        while(l<r){
            if(nums[i]+nums[l]+nums[r]==0){
                arr.push_back({nums[i],nums[l],nums[r]});
                while(l<r && nums[l]==nums[l+1])l++;
                while(l<r && nums[r]==nums[r-1])r--;
                l++;
                r--;

            }
            if(nums[l]+nums[r]>nums[i]){
                r--;
            }
            else{
                l++;
            }

        }
    }
    return arr;
}







int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    vector<vector<int>>f=sub_arr(arr);
    for(int i=0;i<f.size();i++){
        for(int j=0;j<3;j++){
            cout<<f[i][j]<<" ";
        }
        cout<<"\n";
    }
}