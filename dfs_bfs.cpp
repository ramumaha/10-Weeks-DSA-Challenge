#include<bits/stdc++.h>
using namespace std;

class Graph
{
    int v;
    int e;
    int **adj;
    public:
    Graph(){}
    Graph(int v,int e)
    {   
       this->v = v;
        this->e = e;
        adj = new int*[v];
        for (int i = 0; i < v; i++) {
        adj[i] = new int[v];
        for (int j = 0; j < v; j++) {
            adj[i][j] = 0;
        }
    }
    }
    void add_edge(int u,int v,bool bi=1)
    {   adj[u][v]=1;
        if(bi)
        {
            adj[v][u]=1;
        }
    }

    void dfshelper(int src,unordered_set<int>&visited)
    {
        visited.insert(src);
        cout<<char('A'+src)<<" ";
       for(int i=0;i<v;i++)
       {
           if(adj[src][i]==1 && visited.count(i)==0)
           {
               dfshelper(i,visited);
           }
       }
    }

    void dfs()
    {
        unordered_set<int>visited;
        dfshelper(0,visited);}

    
};

int main()
{
  int n,m;
  cin>>n>>m;
  Graph G(n,m);
 
  while(m--)
  {   
      int u,v;
      cin>>u>>v;
      G.add_edge(u,v);
  }
  cout<<"DFS traversal between cities \n";
  G.dfs();
  

}