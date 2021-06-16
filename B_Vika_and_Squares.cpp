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
{ll int n,t=0,l=0,c=0,mini=INT_MAX,index;
cin>>n;
vector<ll int>arr(n+1);
loop(i,1,n+1){
    cin>>arr[i];
    if(arr[i]<=mini){
        mini=arr[i];
        index=i;
    }
    }
loop(i,1,n+1){
    if(arr[i]==mini){
        c++;
    }
}
if(c==1){
    cout<<mini*(n)+n-1<<"\n";
}
else{
    loop(i,1,n+1){
        if(arr[i]==mini){
           
            if(t>=l){
                l=t;
                t=0;
            }
        }
        else{
            t++;
        }
       // cout<<t<<" ";
    }
    //cout<<l<<" "<<t<<"\n";
    //cout<<max(mini*n+n-1,mini*n+l)<<"\n";
    c=0;
    loop(i,1,n){
        if(arr[i]!=mini){
            c++;
            
        }
        else{
            break;
        }
    }
  // cout<<c;
  l=max(l,c+t);
  cout<<mini*n+l<<"\n";
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