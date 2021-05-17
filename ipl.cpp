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

ll int min_(ll int m1,ll int m2,ll int m3){
    ll int mini=min(m1,m2);
    return min(mini,m3);
}





void solve()
{ll int n;
    ll int total=0;
    cin>>n;
    vll m(n);
    vector<bool>select(n,0);
    loop(i,n){cin>>m[i];
    total+=m[i];}
    vll dp(n,0);
    if(n==1){
        cout<<m[0]<<"\n";
        return;
    }
    else if(n==2){
        cout<<m[0]+m[1]<<"\n";
        return;
    }
    if(n==3){
        ll int ans=total-min_(m[0],m[1],m[3]);
        cout<<ans<<"\n";
        return;
    }
    dp[0]=m[0];
    dp[1]=m[1];
    dp[2]=m[2];
    for(ll int i=3;i<n;i++){
        dp[i]=m[i]+min_(dp[i-1],dp[i-2],dp[i-3]);
    }
    total-=min_(dp[n-1],dp[n-2],dp[n-3]);
    cout<<total<<"\n";
    return;



}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
       
    
    
}