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
{ll int n,m,i,j,w1=0,w2=0;
cin>>n>>m>>i>>j;
if(i==1 &&j==m){
    cout<<1<<" "<<1<<" "<<n<<" "<<m<<"\n";
}
else if(i==1 && j==1){
    cout<<1<<" "<<m<<" "<<n<<" "<<1<<"\n";
}
else if(i==n && j==1){
    cout<<1<<" "<<1<<" "<<n<<" "<<m<<"\n";
}
else if(i==n && j==m){
     cout<<1<<" "<<m<<" "<<n<<" "<<1<<"\n";
}
else{
    cout<<1<<" "<<m<<" "<<n<<" "<<1<<"\n";
}


}



int main()
{
        ios:: sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    cout<<fixed; cout<<setprecision(10);
 
    int test_cases = 1;
    cin>>test_cases;
    while(test_cases--)
    {
        solve();
    }
}