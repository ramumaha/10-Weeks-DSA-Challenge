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
#define loop(i,a,b) for(int i=a;i<b;i++)
#define clr(x) memset(x, 0, sizeof(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define sort_v(a) sort(a.begin(),a.end())
#define sort_a(a,n) sort(a,a+n)
#define reverse(a) reverse(a.begin(),a.end())
#define pie 3.1415926536;

void solve()
{ll int n,index,j=-1,mini=INT_MAX;
cin>>n;
vector<ll int>arr(n);
map<int,int>mp;
loop(i,0,n){
    cin>>arr[i];
    mp[arr[i]]++;
}
sort_v(arr);
if(n==2){
    cout<<arr[0]<<" "<<arr[1]<<"\n";
    return;
}
for(ll int i=0;i<n-1;i++){
    if(abs(arr[i+1]-arr[i])<mini){
        index=i;
        mini=abs(arr[i+1]-arr[i]);
    }
}
loop(i,index+1,n){
    cout<<arr[i]<<" ";
}
loop(i,0,index+1){
    cout<<arr[i]<<" ";
}
cout<<"\n";
}



int main()
{
        ios:: sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    cout<<fixed; cout<<setprecision(10);
 
    int test_cases = 1;
    cin>>test_cases;
    while(test_cases--)
    {
        solve();
    }
}