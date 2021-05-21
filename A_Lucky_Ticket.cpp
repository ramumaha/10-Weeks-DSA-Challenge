#include<bits/stdc++.h>
using namespace std;
#define ll long long 




int main(){
    ll int n,c_4=0,c_7=0;
    string str;
    cin>>n>>str;
    for(ll int i=0;i<n;i++){
        if(str[i]=='4' || str[i]=='7'){
            continue;}
        else{
            cout<<"NO\n";
            return 0;
        }
    }
    for(ll int i=0;i<n/2;i++){
        if(str[i]=='4'){
            c_4++;
        }
        else if(str[i]=='7'){
            c_7++;
        }
    }
    for(ll int i=n/2;i<n;i++){
        if(str[i]=='4'){
            c_4--;
        }
        else if(str[i]=='7'){
            c_7--;
        }

    }
    if(c_4==0 && c_7==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}