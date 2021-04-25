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
{ll int n,m,x,y,a,b,p,t;
cin>>n>>m>>x>>y>>a>>b;
p=max(abs(n-a),abs(m-b));
t=abs(n-x)+abs(m-y);
if(p==t||p>t)
{
    cout<<"YES\n";
}
else
{
    cout<<"NO\n";
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