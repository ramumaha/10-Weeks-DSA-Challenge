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

// idea:all n numbers coupled ith 1 are included in the soln,so thats why vector created initially with all 1s
//and the rest sum is in the factors of the number till n
//1st for loop calculates the mod and the nested one traverse and increments 1 in the region where the multuple of mod lies
//then the when the first loop reaches that number its value also gets added and then we get the needed ans.








void solve()
{ll int n,m,count=0;
cin>>n>>m;
vll mod(n+1,1);
for(ll int i=2;i<=n;i++){
    ll int x=m%i;
    count+=mod[x];
    for(ll int j=x;j<=n;j+=i){
        mod[j]++;
    }

}
cout<<count<<"\n";



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