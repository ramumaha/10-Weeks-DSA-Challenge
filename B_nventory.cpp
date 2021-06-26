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
{ll int n,j=0,x;
cin>>n;
vector<ll int>arr(100001);
vector<bool>visited(100000001,0);
vector<ll int>needed;
loop(i,1,n+1){
    cin>>x;
    if(visited[x]==0 && x<=n){
        arr[i]=x;
        visited[x]=1;
    }
    else{
        arr[i]=0;
    }
}
loop(i,1,n+1){
    if(visited[i]==0){
        needed.push_back(i);
    }
}
loop(i,1,n+1){
    if(arr[i]==0){
        arr[i]=needed[j++];
    }
    cout<<arr[i]<<" ";
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