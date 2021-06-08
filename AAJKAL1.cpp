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
{ll int n,x,y,z,a1=0,a2=0,a3=0;
cin>>n>>x>>y>>z;
a1=n*z;
if(n%5==0){
    a2=(n/5)*y;
}
else if(n%5!=0){
    a2=(n/5)*y+(n%5)*z;
}
if(n%10==0){
    a3=(n/10)*x;
}
else if(n%10!=0){
    a3=(n/10)*x;
    ll int temp=n%10;
    if(temp<5){
        a3+=temp*z;
        //cout<<a3;
    }
    else{
        ll int x=a3+(temp/5)*y+(temp%5)*z;
        ll int y=a3+temp*z;
        a3=min(x,y);
        
    }
    
}
//cout<<a1<<" "<<a2<<" "<<a3<<"\n";}
cout<<min(a1,min(a2,a3))<<"\n";}




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