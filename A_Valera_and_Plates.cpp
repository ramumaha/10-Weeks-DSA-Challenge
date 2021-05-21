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
{ll int n,b,p,d1,d2,x;
cin>>n>>b>>p;
loop(i,0,n){
    cin>>x;
    if(x==1){b--;}
    else{
        if(p>0)p--;
        else b--;
    }
}

if(p<0){
    if(b<0){
        cout<<abs(p+b);
        return;
    }
    else{
        cout<<abs(p);
        return;
    }
}
if(b<0){
    cout<<abs(b)<<"\n";
    return;
}
cout<<0<<"\n";


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