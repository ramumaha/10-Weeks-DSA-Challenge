#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
char s[100005];
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        getchar();
        scanf("%s",s);
        int ww=0;
        for(int i=1;i<=n;i++)              // Determine whether there is "L" or "R"
        {
            if(s[i-1]=='R'||s[i-1]=='L')
            {
                ww=1;
                break;
            }
        }
        if(ww==0)
        {
            printf("%d\n",n);
            continue;
        }
        int flag=0;
        int sum=0;
        int k=0;
        int s1=0;
        for(int i=1;i<=n;i++)
        {
            if(s[i-1]=='L'&& flag==0)        
            {
                s1=i;
                k=0;
                flag++;
                continue;
            }
            if(s[i-1]=='R'&&flag==0)
            {
                k=1;
                s1=i;
                sum+=(i-1);
                flag++;
                continue;
            }
            if(s[i-1]=='L'&&k==1)
            {
                k=0;
                if((i-s1)%2==0)
                    sum+=1;
                s1=i;
            }
            if(s[i-1]=='R'&&k==0)
            {
                k=1;
                sum+=(i-s1-1);
                s1=i;
            }
        }
        for(int i=n;i>=1;i--)        // Determine whether the last occurrence is "L" or "R"
        {
            if(s[i-1]=='L')
            {
                sum+=(n-i);
                break;
            }
            if(s[i-1]=='R')
            {
                break;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
