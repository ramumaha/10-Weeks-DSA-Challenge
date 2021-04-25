#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> int_p ;
vector<int>dist(1000);
class Graph
{
    int v;
    list<pair<int,int>>*adj;
    public:
    Graph(int v)
    {
        this->v=v;
        adj=new list<pair<int,int>>[v];
    }
    void add_edge(int u,int v,int w,bool bidir=1)
    {   if(bidir==1)
       { adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));}
        else
       { adj[u].push_back(make_pair(v,w));}
        }
    
    void djakstra(int src)
    {  
        priority_queue<int_p,vector<int_p>,greater<int_p>>pq;
        dist.resize(v);
        for(int i=0;i<v;i++)
        {   
            dist[i]=INT_MAX;
        }
        pq.push(make_pair(0,src));
        dist[src]=0;
        vector<bool>visit(v,0);
        while(!pq.empty())
        {   
            int u=pq.top().second;
            int d=pq.top().first;
            pq.pop();
            list<int_p>::iterator itr;
            for(itr=adj[u].begin();itr!=adj[u].end();itr++)
            {
                int v=(*itr).first;
                int w=(*itr).second;
                if(dist[v]>w+dist[u] &&visit[v]==0)
                {   visit[v]=true;
                    dist[v]=w+dist[u];
                    pq.push(make_pair(dist[v],v));
                }
            }
        }
        cout<<"vertex   Distance from source \n";
        for(int i=0;i<v;i++)
        {cout<<char(i+'a')<<"           "<<dist[i]<<"\n";
           
        }
    }
    void print_adj()
    {   
       for (int i = 0; i <v; ++i) 
       { printf("adjacencyList[%d] ", i);
         
        list< pair<int, int> >::iterator itr = adj[i].begin();         
        while (itr != adj[i].end()) {
           
            cout<<(*itr).first<<"  "<<(*itr).second<<"\n";
            ++itr;
        }
    }}
   void bellan_ford(int src)
    {for(int i=0;i<v;i++)
    {
        int u=i;
        list<int_p>::iterator itr;
        for(itr=adj[i].begin();itr!=adj[i].end();i++)
        {
            int v=(*itr).first;
            int w=(*itr).second;
            if(dist[u]!=INT_MAX && dist[u]+w<dist[v])
            {   
                cout<<"Graph contains negative weight";
                return;
            }
        }
    }
             
     cout<<"No neg cycles";
     return;      
        
    

    }
};


int main()
{Graph g(6);
int m;
cin>>m;
while(m--)
{
    int u,v,w;
    cin>>u>>v>>w;
    g.add_edge(u,v,w);
}
g.djakstra(0);
g.bellan_ford(0);}