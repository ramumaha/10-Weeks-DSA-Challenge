#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,m,ans;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          cin>>arr[i][j];
    }}
   for(int i=0;i<m;i++){
       if(arr[0][i]){
           cout<<2<<"\n";
           return 0;
       }
   }
   for(int i=0;i<m;i++){
       if(arr[n-1][i]){
           cout<<2<<"\n";
           return 0;
       }
   }
   for(int i=0;i<n;i++){
       if(arr[i][0]){
           cout<<2<<"\n";
           return 0;
       }
   }
   for(int i=0;i<n;i++){
       if(arr[i][m-1]){
           cout<<2<<"\n";
           return 0;
       }
   }
   cout<<4<<"\n";

}