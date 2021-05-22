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
{ll int r1=0,r2=0,r3=0,diff=0,d0=0,d1=0,d2=0;
int arr[3][3];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr[i][j];
    }
}
r1=arr[0][0]+arr[0][1]+arr[0][2];
r2=arr[1][0]+arr[1][1]+arr[1][2];
r3=arr[2][0]+arr[2][1]+arr[2][2];
//cout<<r1<<" "<<r2<<" "<<r3;
diff=max(r1,max(r2,r3));
while(diff!=d1+d2+d0){
    d0=diff-r1;
    d1=diff-r2;
    d2=diff-r3;
        if(diff!=d1+d2+d0)
        {
            diff++;
        }
        else{
            break;
        }
    //cout<<d0<<" "<<d1<<" "<<d2<<"\n";
}
arr[0][0]=d0;
arr[1][1]=d1;
arr[2][2]=d2;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";
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