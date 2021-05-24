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
#define msi map<string,int>
#define mss map<string,string>
#define mci map<char,int>
#define mic map<int,char>
#define loop(i,a,b) for(ll int i=a;i<b;i++)
#define clr(x) memset(x, 0, sizeof(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define sort_v(a) sort(a.begin(),a.end())
#define sort_a(a,n) sort(a,a+n)
#define reverse(a) reverse(a.begin(),a.end())
#define pie 3.1415926536;

void solve()
{ll int n,x,maxi=-1,arr[100000],j=0;
cin>>n;
mii mp;
loop(i,0,n){
    cin>>x;
    mp[x]++;
    maxi=max(maxi,x);
}
ll int c=0;
for(auto i:mp){
    if(i.second>=2){
        c+=2;
        arr[j]=i.first;
        j++;
    }
    else if(i.second==1){
        c+=1;
    }
}
if(mp[maxi]>=2){
    c--;
}
cout<<c<<"\n";
for(auto i:mp){
    cout<<i.first<<" ";
}
if(j>0){
sort_a(arr,j);
for(int i=j-1;i>=0;i--){
    if(arr[i]!=maxi){
        cout<<arr[i]<<" ";
    }
}}
}



int main()
{
        ios:: sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    cout<<fixed; cout<<setprecision(10);
 
    int test_cases = 1;
    //cin>>test_cases;
    while(test_cases--)
    {
        solve();
    }
}