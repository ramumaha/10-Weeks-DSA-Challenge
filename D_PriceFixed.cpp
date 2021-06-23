#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll int ,ll int>
#define mp make_pair
#define ff first
#define ss second
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
{ll int n;
cin>>n;
vector<pll>arr(n);
loop(i,0,n){
    cin>>arr[i].ss>>arr[i].ff;
}
sort_v(arr);
 ll int s=0,e=n-1,bought=0,ans=0;
while(s<=e){
    if(bought>=arr[s].ff){
        ans+=arr[s].ss;
        bought+=arr[s].ss;
        s++;
    }
    else{
        ll req=min(arr[s].ff-bought,arr[e].ss);
        ans+=2*req;
        bought+=req;
        arr[e].ss-=req;
        if(arr[e].ss==0){ //if we had selected the last item
        e--;}

    }
}
cout<<ans<<"\n";
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