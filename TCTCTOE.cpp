#include<bits/stdc++.h>
using namespace std;


int columncheck(vector<vector<char>> sheet,char p)
{
    for(int i=0;i<3;i++)
        if(sheet[0][i]==sheet[1][i] && sheet[1][i]==sheet[2][i] && sheet[1][i]==p)
            return 1;
    return 0;
}

int tictactoe()
{
    vector<vector<char>> sheet;
    for(int i=0;i<3;i++)
    {
        char p,q,r;cin>>p>>q>>r;
        sheet.push_back(vector<char>({p,q,r}));
    }
    int cx,co,c_,xwin,owin;
    cx=co=c_=xwin=owin=0;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            (sheet[i][j]=='X')?(cx++):(sheet[i][j]=='O')?(co++):(c_++);
    if(find(sheet.begin(),sheet.end(),vector<char>({'X','X','X'}))!=sheet.end()||(sheet[0][0]==sheet[1][1] && sheet[1][1]==sheet[2][2] && sheet[2][2]=='X')||(sheet[0][2]==sheet[1][1] && sheet[1][1]==sheet[2][0] && sheet[2][0]=='X')||columncheck(sheet,'X')==1)
        xwin++;
    if(find(sheet.begin(),sheet.end(),vector<char>({'O','O','O'}))!=sheet.end()||(sheet[0][0]==sheet[1][1] && sheet[1][1]==sheet[2][2] && sheet[2][2]=='O') ||(sheet[0][2]==sheet[1][1] && sheet[1][1]==sheet[2][0] && sheet[2][0]=='O')||columncheck(sheet,'O')==1)
        owin++;
    if(cx==co || cx==co+1)
    {
        if(owin==1)
        {
            if(xwin==1 || cx!=co)
                return 3;
            return 1;
        }
        else if(xwin==1)
        {
            if(cx<=co)
                return 3;
            return 1;
        }
        else if(c_==0)
            return 1;
        else if(c_>0)
            return 2;
    }
    return 3;
}

main()
{
    int t;
    cin>>t;vector<int> p;
    for(int i=0;i<t;i++)
        p.push_back(tictactoe());
    for(int i:p)
        cout<<i<<endl;
}
