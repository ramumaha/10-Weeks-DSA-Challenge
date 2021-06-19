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

long long int power(ll int a,ll int b ){
    if(b==0){
        return 1;
    }
    return a*power(a,b-1);
}

void solve()
{ll int n,ans=0,x;
cin>>n;
string str=to_string(n);
x=str.length();
if(x==1){
    cout<<n<<"\n";
}
else{
    ans+=9;
    loop(i,2,x){
        ll int y=9*(power(10,i-1)+1)-9*1;
       // cout<<y;
        ans+=y*i;
    }
    //cout<<ans<<" ";
   ans+=(n-(power(10,x-1)-1))*x;
    cout<<ans<<"\n";
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