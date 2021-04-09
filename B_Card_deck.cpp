#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{   int n,j=0;
    cin>>n;
    vector<int>a(n),b(n);
    vector<int>c;
    map<int,int>mp;
    for( int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
        mp[a[i]]=0;
    }
    sort(b.begin(),b.end(),greater<ll int>());
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]!=b[j])
        {
            mp[a[i]]=1;
            c.push_back(a[i]);
        }
        else
        {
            c.push_back(a[i]);
            mp[a[i]]=1;
            for(int k=(int)c.size()-1;k>=0;k--)
            {
                cout<<c[k]<<" ";
            }

        
        while(mp[b[j]]==1)
        {
            j++;
        }
        c.clear();}

    }
    for(ll int i=(int)c.size()-1;i>=0;i--)
    {
        cout<<c[i]<<" ";
    }
    cout<<"\n";

}








int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
    
}