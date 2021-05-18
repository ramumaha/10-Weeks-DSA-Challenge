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
{ll int n,a1,a2,a3;
int flag=0;
cin>>n;
vll arr(n);
vll::iterator y;
for(ll int i=0;i<n;i++){
    cin>>arr[i];
}
for(ll int i=0;i<n;i++){
    for(ll int j=0;j<n;j++){
        ll int x;
        if(arr[i]<arr[j]){
            continue;
        }
        else{
            x=arr[i]-arr[j];
             y=find(arr.begin(),arr.end(),x);
            if(y!=arr.end() && y-arr.begin()!=i && y-arr.begin()!=j){
                cout<<i+1<<" "<<j+1<<" "<<y-arr.begin()+1;
                return;

            }
        }
    }

}
cout<<-1<<"\n";
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