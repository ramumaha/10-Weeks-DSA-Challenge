#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main()
{
	int n,k;
	int cnt=0;
	scanf("%d %d",&n,&k);
	for(int i=1;i<=2*n;i++)
	{
		if(cnt<k)
		{
			if(i%2)
			{
				printf("%d ",i+1);
			}
			else
			{
				printf("%d ",i-1);
				cnt++;
			}
		}
		else
		{
			if(i==2*n) printf("%d\n",i);
			else printf("%d ",i);
		}
	}
	return 0;
}