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
{ll int r1,r2,c1,c2,r=0,b=0,k=0;;
cin>>r1>>c1>>r2>>c2;
if(r1==r2 || c1==c2){
    r=1;
}
else{
    r=2;
}
if((r1+c1)%2==(r2+c2)%2){
    if(r1+c1==r2+c2 || abs(r1-r2)==abs(c1-c2)){
       // cout<<"h";
    b=1;
}
else{
    b=2;
}
}
k=max(abs(r1-r2),abs(c1-c2));
cout<<r<<" "<<b<<" "<<k;
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