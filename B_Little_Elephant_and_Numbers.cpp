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
    {ll int n,temp,c=0;
    vector<ll int>arr;
    set<int>src;
    cin>>n;
    if(n==1){
        cout<<1;
        return;
    }
    temp=n;
    while(temp>0){
        src.insert(temp%10);
        temp/=10;
    }
    for(ll int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(find(arr.begin(),arr.end(),i)==arr.end())
           { arr.push_back(i);
            
        }
        if(find(arr.begin(),arr.end(),n/i)==arr.end()){
            arr.push_back(n/i);
        }
    }}
    // for(auto i:arr){
    //     cout<<i<<" ";
    // }
    for(ll int i=0;i<arr.size();i++){
        set<int>mp;
        while(arr[i]>0){
          mp.insert(arr[i]%10);
          arr[i]/=10;
       }
        set<int>intersect;
        set_intersection(mp.begin(),mp.end(),src.begin(),src.end(),inserter(intersect, intersect.begin()));
        if(intersect.size()>0){
            c++;
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