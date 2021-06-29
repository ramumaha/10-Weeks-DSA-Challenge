#include<bits/stdc++.h>
using namespace std;

int max_val(vector<int>&arr){
    int n=arr.size();
    int max_till=0,total_max=INT_MIN;
    for(int i=0;i<n;i++){
        max_till+=arr[i];
        if(max_till>total_max){
            total_max=max_till;
        }
        if(max_till<0){
            max_till=0;
        }
    }
    return total_max;

}








int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    cout<<max_val(arr);
}