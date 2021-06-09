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
{ll int n,m,c;
cin>>n>>m;
ll int a[5],b[5];
for(int i=0;i<5;i++){
    a[i]=0;
    b[i]=0;
}
ll int maxi=max(n,m);
ll int mini=min(n,m);
for(ll int i=1;i<=maxi;i++){
    if(i%5==0 && i<5 && i<=mini){
        a[i]++;
        b[i]++;
    }
    else if(i<=mini){
        b[i%5]++;
        a[i%5]++;
    }
    else{
        a[i%5]++;
    }
}
c=a[0]*b[0]+a[1]*b[4]+a[2]*b[3]+a[3]*b[2]+a[4]*b[1];
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