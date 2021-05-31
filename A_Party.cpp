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
ll int c;
vector<int>adj[200010];

void dfs(ll int index,ll int size){
    c=max(c,size);
    for(ll int i=0;i<adj[index].size();i++){//finding the number of levels in a tree.
        dfs(adj[index][i],size+1);
    }
}


void solve(){
    ll int n,x=1;
    cin>>n;
    //list<int>adj[n+1];
    for(ll int i=1;i<=n;i++){
        cin>>c;
        if(c!=-1){
            adj[c].push_back(i);
        }
    }
    c=0;
    for(ll int i=1;i<=n;i++){
        dfs(i,1);
    }
   cout<<c;
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