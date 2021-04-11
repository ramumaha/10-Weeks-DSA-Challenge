#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define pii pair<int, int>
#define mp make_pair
#define f first
#define s second
#define mii map<int, int>
#define msi map<string,int>
#define mss map<string,string>
#define mci map<char,int>
#define mic map<int,char>
#define fo(i,n) for(int i=0;i<n;i++)
#define clr(x) memset(x, 0, sizeof(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t,n;
    cin>>t>>n;
    string a,b;
    string word[t];
    mss s;
    msi s1;
    fo(i,n)
    {cin>>a>>b;
    s[a]=b;}
    fo(i,t)
    {
        cin>>word[i];
        
        
    }
    fo(i,t)
    {
        if(word[i].length()>s[word[i]].length())
        {
            cout<<s[word[i]]<<" ";
        }
        else
        {
            cout<<word[i]<<" ";
        }
    }
   
       
    
    
}