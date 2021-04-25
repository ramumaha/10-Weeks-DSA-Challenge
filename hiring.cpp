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
#define fo(i,n) for(int i=0;i<n;i++)
#define clr(x) memset(x, 0, sizeof(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define sort(a) sort(a.begin(),a.end())
#define reverse(a) reverse(a.begin(),a.end())










void solve()
{int n,m,x,y;
string ans;
cin>>n>>m>>x>>y;
while(n--)
{   int f=0,u=0,p=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {   if(s[i]=='F')f++;
        else if(s[i]=='U')u++;
        else p++;

    }
    if(f>=x || (f==(x-1)&& p>=y))
    {
        ans+='1';
    }
    else
    {
        ans+='0';
    }
}
cout<<ans<<"\n";

}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
       
    
    
}