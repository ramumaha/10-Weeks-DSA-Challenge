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
const unsigned long long int M = 1000000007;




void solve()
{ll int n;
cin>>n;
if(n==1){
    cout<<1<<"\n";
    return;
}
n--;
unsigned ll int ans=1;
unsigned ll int a=2;
while(n>0){
    if(n&1){
        ans=(ans* a )% M;}
        a=(a*a)%M;
        n>>=1;
    
   
}
 cout<<ans<<"\n";

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