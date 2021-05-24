

    #include <iostream>
    #include <cstdio>
    #include <cstring>
    #include <map>
    #include <algorithm>
    using namespace std;
    const int MAXN = 1e5+100;
    int a[MAXN];
    int n;
    map<int,int>mp;
    int main(){
        int i;
        int cnt = 0;
        int b[4];
        scanf("%d",&n);
        for(i = 0; i < n; i++){
            scanf("%d",&a[i]);
            if(!mp.count(a[i]))
                mp[a[i]] = cnt++;
        }
        if(cnt>3)
            printf("NO\n");
        else{
            if(cnt <= 2)
                printf("YES\n");
            else{
                cnt = 0;
                map<int,int>::iterator it;
                for(it = mp.begin(); it != mp.end(); it++)
                    b[cnt++] = (*it).first;
                sort(b,b+cnt);
                if(b[2]-b[1] != b[1]-b[0])
                    printf("NO\n");
                else
                    printf("YES\n");
            }
        }
        return 0;
    }