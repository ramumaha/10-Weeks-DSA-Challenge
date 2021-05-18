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
{ll int n,c0=0,c1=0;
string str;
cin>>n>>str;
for(ll int i=0;i<n;i++){
    if(str[i]=='0'){
        c0++;
    }
    else{
        c1++;
    }
}
cout<<n-2*min(c0,c1);


}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t=1;
   // cin>>t;
    while(t--)
    {
        solve();
    }
       
    
    
}