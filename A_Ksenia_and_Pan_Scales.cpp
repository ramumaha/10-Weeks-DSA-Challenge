#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b,c,d;
    cin>>a>>b;
    int index=a.find('|');
    c=a.substr(0,index);
    d=a.substr(index+1);
    for(auto i:b){
        if(c.size()<=d.size()){
            c+=i;
        }
        else{
            d+=i;
        }
    }
    cout<<(c.size()==d.size() ? c+'|'+d : "Impossible");
}