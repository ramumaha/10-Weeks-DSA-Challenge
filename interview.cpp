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
#define MAX 1000000007




void solve()
{ll int n,sum1,sum2,maxi=INT_MIN;
cin>>n;
vll a(n),b(n);
loop(i,n){cin>>a[i];}
loop(i,n){cin>>b[i];}
sum1=a[0];
sum2=b[0];
for(ll int i=0;i<n;i++){
    sum1=sum1|a[i];
    sum2=sum2|b[i];
}

cout<<sum1+sum2<<"\n";
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