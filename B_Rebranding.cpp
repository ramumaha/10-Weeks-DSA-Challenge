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
// alter in the alphabet thing and print the final string pattern based on revised alphabet
void solve()
{char ch[30];
string str;
char a,b;
for(int i=0;i<26;i++){
    ch[i]=char('a'+i);
}
ll int n,m;
cin>>n>>m>>str;
for(ll int i=0;i<m;i++){
    cin>>a>>b;
    for(ll int i=0;i<26;i++){
        if(ch[i]==a){ch[i]=b;}
        else if(ch[i]==b){ch[i]=a;}
    }
}
for(ll int i=0;i<n;i++){
    cout<<ch[str[i]-'a'];
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