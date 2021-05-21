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
#define sort(a) sort(a.begin(),a.end())
#define reverse(a) reverse(a.begin(),a.end())

void solve()
{ll int n,ans=1,l=0,r=0;
cin>>n;
vi arr(n);
loop(i,0,n)cin>>arr[i];
for(ll int i=0;i<n-1;i++){
    if(arr[i]<=arr[i+1]){
        l=i;
        r=i+1;
        i++;
        while(arr[i]<=arr[i+1] && r<n-1){
        r++;
        i++;
    }
    }
    //cout<<l<<" "<<r<<"\n";
    ll int a=r-l+1;
    ans=max(ans,a);
    l=i;r=i;    
}
cout<<ans;

}




int main()
{   ios:: sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    cout<<fixed; cout<<setprecision(10);
 
    int test_cases = 1;
    //cin>>test_cases;
    while(test_cases--)
    {
        solve();
    }
}