#include<bits/stdc++.h>
using namespace std;

string pali(string s){
    string t=s;
    reverse(t.begin(),t.end());
    if(t==s){
        return t;
    }
    

}


int main(){
    string s;
    cin>>s;
    cout<<pali(s);
    
}