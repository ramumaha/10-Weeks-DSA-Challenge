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
{ll int D,d,P,Q,tot=0,period;
cin>>D>>d>>P>>Q;
if(D%d!=0){
    if(D/d>=1){
    period=D/d;
    int rem=D%d;
    tot=d*P;
    period--;
    tot+=d*(period*P+((period)*(period+1))/2*Q);
    tot+=rem*((period+1)*Q+P);
   
}
else{
    tot=D*P;
}}
else{
    period=D/d;
     tot=d*P;
     period--;
    tot+=d*(period*P+((period)*(period+1))/2*Q);
}

cout<<tot<<"\n";





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