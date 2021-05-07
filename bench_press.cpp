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
#define loop(i,n) for(int i=0;i<n;i++)
#define clr(x) memset(x, 0, sizeof(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define sort(a) sort(a.begin(),a.end())
#define reverse(a) reverse(a.begin(),a.end())


void solve()
{ll int n,w,w1,x;
cin>>n>>w>>w1;
mii weight;
loop(i,n)
{cin>>x;
weight[x]++;
}
if(w1>=w){
    cout<<"YES\n";
    return;
}
w-=w1;
for(auto i:weight){
    if(i.second>=2)
    {
       // int c=i.second;
        if(i.second%2==0)
        {
            w-=(i.second*i.first);
        }
        else
        {
            w-=(i.second-1)*(i.first);
        }    
        i.second=0;    
    }
     if(w<=0)
    {
                    break;
                }
        
}
if(w<=0){
    cout<<"YES\n";
    return;
}
cout<<"NO\n";


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