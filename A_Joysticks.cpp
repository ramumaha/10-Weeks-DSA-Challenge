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
#define loop(i,a,b) for(int i=a;i<b;i++)
#define clr(x) memset(x, 0, sizeof(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define sort(a) sort(a.begin(),a.end())
#define reverse(a) reverse(a.begin(),a.end())
#define MAX 1000000007



void solve()
{ int n,m,ans=0;
cin>>n>>m;
if(n==1 && m==1){
    cout<<0<<"\n";
    return;
}
while(m>0 && n>0){
    if(m>n){
        m-=2;
        n++;
        ans++;
    }
    else{
        n-=2;
        m++;
        ans++;
    }
}

cout<<ans<<"\n";


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