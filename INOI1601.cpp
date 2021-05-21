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
#define loop(i,n) for(int i=0;i<n;i++)
#define clr(x) memset(x, 0, sizeof(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define sort(a) sort(a.begin(),a.end())
#define reverse(a) reverse(a.begin(),a.end())
//basically dfs and checking 
ll int arr[10000];
vll m[10000];
ll int ans;

void dfs_wealth(ll int i,ll int w){
     ans=max(ans,w-arr[i]);
    for(auto x:m[i]){
        dfs_wealth(x,max(w,arr[i]));
    }

}


void solve()
{ll int n;
int p,root;
cin>>n;
for(int i=1;i<=n;i++)cin>>arr[i];
for(int i=1;i<=n;i++){
cin>>p;
if(p>0){
    m[p].push_back(i);
}
else
{root=i;}
}
dfs_wealth(root,arr[root]);
cout<<ans<<" ";

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