#include <iostream>
 
using namespace std;
int arr[105];
int main()
{
    int m;
    while(cin>>m)
    {
        for(int i=0; i<m; i++)
            cin>>arr[i];
        bool flag = 1;
        int ans = 0;
        while(flag)
        {
            flag = 0;
            int Max = -9999999;
            int k = 1;
            for(int i=1; i<m; i++)
            {
                if(arr[i] > Max)
                {
                    Max = arr[i];
                    k = i;
                }
            }
            if(Max >= arr[0])
            {
                arr[k]--;
                arr[0]++;
                ans++;
                flag = 1;
            }
            else
                flag = 0;
        }
        cout<<ans<<endl;
    }
    return 0;}