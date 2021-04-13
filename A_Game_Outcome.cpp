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

void solve()
{int n,c=0;
cin>>n;
int arr[n][n];
int sum_r[n];
clr(sum_r);
int sum_c[n];
clr(sum_c);
fo(i,n)
{
    fo(j,n)
    {
        cin>>arr[i][j];
    }
}

fo(i,n)
{
    fo(j,n)
    {
        sum_r[i]+=arr[i][j];
        sum_c[i]+=arr[j][i];
    }
}

/*fo(i,n)
{
    cout<<sum_r[i]<<" ";
}
cout<<"\n";
fo(i,n)
{
    cout<<sum_c[i]<<" ";
}*/

 for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (sum_r[i] < sum_c[j])
            {
                c += 1;
            }
        }
    }

cout<<c;



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