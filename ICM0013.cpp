#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll int n;
bool good(ll x)
{
    return n%x<=(n/2);
}


void solve()
{
    cin>>n;
    ll int l=1,r=n+1;
    while(r>l+1)
    {
        ll m=(r+l)/2;
        if(good(m))
        {
            l=m;
        }
        else
        {
            r=m;
        }
    }
    cout<<l<<"\n";
}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}