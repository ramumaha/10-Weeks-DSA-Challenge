#include<bits/stdc++.h>
using namespace std;
#define ll long long 


void solve()
{
    int n;
    cin>>n;
    string arr[n];
    int x1,x2,y1,y2,f=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]=='*' &&f==0)
            {
                x1=i;
                y1=j;
                f++;
            }
            else if(arr[i][j]=='*' && f==1)
            {
                x2=i;
                y2=j;
                break;
            }

        }
    }
    //cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
    if(y1 == y2)
    {   /*if((x1)>0 && (x1)<n-1 && x2>0 && x2<n-1)
        {arr[x1+1][y1]='*';
        arr[x2+1][y2]='*';}
        else if(x1==0 && x2==0)
        {
            arr[x1+1][y1]='*';
            arr[x2+1][y2]='*';
        }
        else if(x1==n-1 && x2==n-1)
        {
            arr[x1-1][y1]='*';
            arr[x2-1][y2]='*';
        }*/
        if(y1>=0 && y1<n-1)
        {
            arr[x1][y1+1]='*';
            arr[x2][y2+1]='*';
        }
        if(y1==n-1)
        {
            arr[x1][y1-1]='*';
            arr[x2][y2-1]='*';
        }
    }
    else if(x1==x2)
    {/*if((y1)>0 && (y1)<n-1 && y2>0 && y2<n-1)
        {arr[x1][y1+1]='*';
        arr[x2][y2+1]='*';}
        else if(x1==0 && x2==0)
        {
            arr[x1][y1+1]='*';
            arr[x2][y2+1]='*';
        }
        else if(x1==n-1 && x2==n-1)
        {   
            arr[x1][y1-1]='*';
            arr[x2][y2-1]='*';
        }*/
         if(x1>=0 && x1<n-1)
        {
            arr[x1+1][y1]='*';
            arr[x2+1][y2]='*';
        }
        if(x1==n-1)
        {
            arr[x1-1][y1]='*';
            arr[x2-1][y2]='*';
        }
        }
    else if(x1!=x2 && y1!=y2)
    {
    
        arr[x1][y2]='*';
        arr[x2][y1]='*';
       // cout<<arr[x1][y2]<<" "<<arr[x2][y1];
    
        
    }
    //cout<<"ans  "<<"\n";
    for(int i=0;i<n;i++)
    {
       cout<<arr[i];
        cout<<"\n";
    }
    
}
    






int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
   
    
    
    
}