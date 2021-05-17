#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    long long int n,c=0;
    cin>>n;
    while(n>0){
       ll temp=n%10;
       if(temp==0||temp==4||temp==6||temp==9){
           c++;
       }
       else if(temp==8){
           c+=2;
       }
       n/=10;
    }
    cout<<c<<"\n";
}