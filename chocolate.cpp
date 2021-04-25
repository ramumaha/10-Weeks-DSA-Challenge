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
{ll int n,x,y,c=0;
cin>>n>>x;
map<int,int>mp;
for(ll int i=0;i<n;i++)
{
    cin>>y;
    mp[y]++;
}

for(auto i:mp)
{
    if(i.second>=2)
    {
        c+=i.second-1;
    }
}
if(c>=x)
{
    cout<<mp.size()<<"\n";
    return;
}
else
{cout<<mp.size()-(x-c)<<"\n";
return;

}



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