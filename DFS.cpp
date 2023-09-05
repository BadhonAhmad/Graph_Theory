#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
vector<int>g[N];
int vis[N];

void dfs(int source){
    //take action on vertex after entering the vertex
    vis[source]=1;
    cout<<source<<endl;
    for(auto child:g[source]){
        //take action on child before entering the child node
        cout<<"par "<<source<<" child "<<child<<endl;
        if(vis[child]) continue;
        dfs(child);
        //take action on child after exiting child node
    }
    //take action on vertex before exting the vertex
}

int main()
{
    int t=1;
    //cin>>t;
    while (t--)
    {
        int n,r,m;
        cin>>n>>m;
        for(int i=0; i<9; i++){
            cin>>r>>m;
            g[r].push_back(m);
            g[m].push_back(r);
        }  
        dfs(1);
    }
    
}
