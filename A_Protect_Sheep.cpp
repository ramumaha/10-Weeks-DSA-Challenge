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
{ll int n,m;
cin>>n>>m;
char arr[n+10][m+10];
loop(i,1,n+1){
    loop(j,1,m+1){
        cin>>arr[i][j];
    }
}
for(ll int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(arr[i][j]=='S' &&(arr[i][j-1]=='W'|| arr[i][j+1]=='W'||arr[i+1][j]=='W'||arr[i-1][j]=='W')){
            cout<<"No\n";
            return;
        }
        else if(arr[i][j]=='.'){
            arr[i][j]='D';
        }
        }
}
cout<<"Yes\n";
loop(i,1,n+1){
    loop(j,1,m+1){
        cout<<arr[i][j];
    }
    cout<<"\n";
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