    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
    	int n,m;
    	cin>>n>>m;
    	for(int i = 0; i<n; i++) 
    	printf("%d\n",(m+i%m)%2 ? ((m+i%m+1)/2) : (m-(i%m))/2);
    	return 0 ;
    }