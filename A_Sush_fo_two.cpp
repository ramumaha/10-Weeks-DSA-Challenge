#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,pre1=0,pre2=0,ans=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {   
        cin>>arr[i];
    }ans=max(ans,min(pre1,pre2));
		pre2=0;
    for(int i=0;i<n;)
    {
        while(arr[i]==1 && i<n)
        {
            i++;
            pre1++;
        }
        ans=max(ans,min(pre1,pre2));
        pre2=0;
        while(arr[i]==2 && i<n)
        {
            i++;
            pre2++;
        }
      
        ans=max(ans,min(pre1,pre2));
        pre1=0;
    }
    cout<<ans*2;
    
}