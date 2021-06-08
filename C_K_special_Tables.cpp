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
{ ll int n,k,c=1,x=0;
cin>>n>>k;
long long int arr[n+1][n+1]={0};
if(k!=n || k!=1){
for(ll int i=1;i<=n;i++){
    for(ll int j=1;j<k;j++){
        arr[i][j]=c;
        c++;
    }
}
for(ll int i=1;i<=n;i++){
    for(ll int j=k;j<=n;j++){
        if(arr[i][j]==0){
        arr[i][j]=c;
        c++;}
    }
}
for(ll int i=1;i<=n;i++){
    x+=arr[i][k];
}
cout<<x<<"\n";
for(ll int i=1;i<=n;i++){
    for(ll int j=1;j<=n;j++){
        cout<<arr[i][j]<<" "; 
    }
    cout<<"\n";
}}
else{
    for(ll int i=1;i<=n;i++){
        for(ll int j=1;j<=n;j++){
            arr[i][j]=c;
            c++;
        }
    }
    for(ll int i=1;i<=n;i++){
    x+=arr[i][k];
}
    cout<<x<<"\n";
    for(ll int i=1;i<=n;i++){
    for(ll int j=1;j<=n;j++){
        cout<<arr[i][j]<<" "; 
    }
    cout<<"\n";
}
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