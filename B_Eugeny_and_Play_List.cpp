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
{ll int n,m,ans=0,x,y;

cin>>n>>m;
vector<ll int>arr(m);
long long int m_p[n+1];
for(ll int i=0;i<n;i++){
    cin>>x>>y;
    ans+=x*y;
    m_p[i+1]=ans;
}
for(ll int i=0;i<m;i++){
    cin>>arr[i];
}
// for(auto i:mp){
//     cout<<i.first<<" "<<i.second<<"\n";
// }
for(ll int i=0;i<m;i++){
    ll int l=0,r=n+1;
    while(r>l+1){
        ll int mid=(l+r)/2;
        if(arr[i]<=m_p[mid]){
            r=mid;
        }
        else{
            l=mid;
        }
    }
    cout<<r<<"\n";
   
}

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