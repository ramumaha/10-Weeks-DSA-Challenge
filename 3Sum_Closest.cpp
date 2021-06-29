#include<bits/stdc++.h>
using namespace std;



int final(vector<int>&nums,int target){
    int n=nums.size();
    sort(nums.begin(),nums.end());
    int left_close=INT_MIN+1,right_close=INT_MAX;
    for(int i=0;i<n;i++){
        int l=i+1,r=n-1;
        while(l<r){
            int sum=nums[i]+nums[l]+nums[r];
            if(sum>target){
                right_close=min(right_close,sum);
               // cout<<right_close<<" ";
                r--;
            }
            else if(sum<target){
                left_close=max(left_close,sum);
                l++;
            }
            else{
                return target;
            }
        }
    }
    //cout<<abs(target-left_close)<<"    "<<abs(right_close-target);
    if(abs(target-left_close)<abs(right_close-target)){
        return left_close;
    }
    else{
        return right_close;
    }
    

}








int main(){
    int n,target;
    cin>>n>>target;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<final(arr,target);
}