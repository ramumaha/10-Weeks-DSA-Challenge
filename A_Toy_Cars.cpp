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
{ll int n,c=0,f=1;
cin>>n;
int ans[100],x=0;
int arr[n+1][n+1];
loop(i,1,n+1){
    loop(j,1,n+1){
        cin>>arr[i][j];
    }
}
loop(i,1,n+1){
    f=1;
    loop(j,1,n+1){
        if(arr[i][j]==3 || arr[i][j]==1)
        {f=0;
        break;            
        }
       
        }
         if(f){
            c++;
            ans[x]=i;
            x++;
       
    }
}
cout<<c<<"\n";
for(int i=0;i<x;i++){
    cout<<ans[i]<<" ";
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