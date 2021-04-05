#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll int mins,n;
bool good(ll int x)
{   int sum=0;
    for(int i=1;i<=x;i++)
    {sum+=i*5;
    }
    //cout<<sum+mins<<" ";
    return sum+mins <=240;
}

int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>mins;
    ll int l=0,r=n+1;
    while(r>l+1)
    {
        ll m=(l+r)/2;
        if(good(m))
        {
            l=m;
        }
        else
        {r=m;
        
        }
    }
    cout<<l;
}