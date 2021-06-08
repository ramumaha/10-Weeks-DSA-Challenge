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
#define MAX  1000000007
ll int n,m;
ll int fast(ll int ans){
     while (m > 0){
        ans = (ans * ans) % MAX;
        m--;}
        ans=ans%MAX;
        return ans;
}

void solve()
{ll int ans=1;
cin>>n>>m;
for(ll int i=0;i<n;i++){
    ans=(ans<<1)%MAX;
}
//cout<<ans<<" ";
ans--;
m--;
ll int val=fast(ans);
// for(ll int i=0;i<m;i++){
//     ans=(ans*ans)%MAX;
// }
cout<<val<<"\n";

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