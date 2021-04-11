#include<bits/stdc++.h>
using namespace std;
#define  ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll q,x,y,l,r,a1,a2;
    cin>>q;
    while(q--)
    {cin>>x>>y;
    l=-1;
    r=n;
    while(r>l+1)
    {ll m=(l+r)/2;
    if(v[m]<x)
    l=m;
    else
    r=m;}  
    a1=r+1;
    l=-1;
    r=n;
    while(r>l+1)
    {ll m=(l+r)/2;
    if(v[m]<=y)
    {l=m;}
    else
    r=m;}
    a2=l+1;
    cout<<a2-a1+1<<" ";
        
    }

}