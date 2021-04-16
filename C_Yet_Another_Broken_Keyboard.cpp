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
#define fo(i,n) for(int i=0;i<n;i++)
#define clr(x) memset(x, 0, sizeof(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define sort(a) sort(a.begin(),a.end())
#define reverse(a) reverse(a.begin(),a.end())

string str;
int n,m;
vector<char>arr;

/*bool good(ll int x)
{

}
*/




void solve()
{cin>>n>>m;
ll int count=0;
cin>>str;
char c;
fo(i,m)
{   cin>>c;
    arr.push_back(c);
}
ll int i=0,j=0;
for(i;i<n;i++)
{
    j=i;
    while(j<n && find (arr.begin(), arr.end(), str[j])!=arr.end())
    {
        j++;
    }
    count+=((j-i)*(j-i+1))/2;
    i=j;
}

cout<<count;


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