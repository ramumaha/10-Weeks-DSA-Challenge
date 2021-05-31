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
{ll int n,dest;
char a;
string arr,rev;
cin>>n>>dest;
for(ll int i=0;i<2*n;i++){
    if(i%2==0){
    cin>>a;
    arr+=a;}
}
for(ll int i=0;i<2*n;i++){
    if(i%2==0){
    cin>>a;
    rev+=a;}
}
if(arr[0]=='1'){
    if(arr[dest-1]=='1'){
        cout<<"yes\n";
        return;
    }
    if(rev[dest-1]=='1'){
        for(ll int i=dest;i<n;i++){
            if(arr[i]=='1'&&rev[i]=='1'){
                cout<<"yes\n";
                return;
            }
        }
    }
    }

cout<<"no\n";
return;
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