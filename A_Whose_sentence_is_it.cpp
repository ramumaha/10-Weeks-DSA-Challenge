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
{string str;
char ch[101];
cin.getline(ch,101);
str.assign(ch);
if(str.length()>=5){
    if(str.substr(str.length()-5,5)=="lala."){
        if(str.substr(0,5)=="miao."){
            cout<<"OMG>.< I don't know!\n";
        }
        else{
            cout<<"Freda's\n";
        }
        
    }
    else{
        if(str.substr(0,5)=="miao."){
            cout << "Rainbow's\n";
        }
        else{
            cout<<"OMG>.< I don't know!\n";
        }
    }
}
else{
    cout<<"OMG>.< I don't know!\n";
}

}



int main()
{
        ios:: sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    cout<<fixed; cout<<setprecision(10);
 
    int test_cases = 1;
    cin>>test_cases;
    cin.ignore();
    while(test_cases--)
    {   
        //cout<<test_cases<<": ";
        solve();
        
    }
}