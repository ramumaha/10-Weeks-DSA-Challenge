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

//find individually for left and right and find the max out of it.



void solve()
{ll int n,left[1000]={0},right[1000]={0},max=INT_MIN;
cin>>n;
ll int arr[n];
for(ll int i=0;i<n;i++){cin>>arr[i];}
for(ll int i=1;i<n;i++){
    if(arr[i]>=arr[i-1]){
        left[i]=left[i-1]+1;
    }
    else{
        left[i]=0;
        
    }
}
for(ll int i=n-2;i>=0;i--){
    if(arr[i]>=arr[i+1]){
        right[i]=right[i+1]+1;
    }
    else{
        right[i]=0;
    }
}

for(int i=0;i<n;i++){
    if(left[i]+right[i]+1>=max){
        max=left[i]+right[i]+1;
    }
}

cout<<max<<"\n";

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