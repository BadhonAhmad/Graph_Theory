#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>g[N];//The code is for basic bfs code and shortest path for 
int vis[N];// a destination from a source
int level[N];
int parent[N];
void bfs(int source){
    queue<int>q;
    q.push(source);
    vis[source]=1;
    while (!q.empty())
    {
        int frnt=q.front();
        q.pop();
        for(auto child:g[frnt]){
            if(!vis[child]){
                q.push(child);
                vis[child]=1;
                level[child]=level[frnt]+1;
                parent[child]=frnt;
            }
        }
    }
}

int main()
{
    int n;cin>>n;
    for(int i=0; i<n; i++){
        int x,y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    parent[1]=-1;
    bfs(1);
    // for(int i=1; i<=n; i++)
    // {
    //     cout<<"level of"<< i << "="<<level[i]<<'\n';
    // }
    vector<int> path;
    if(!vis[n]){
        cout<<"NO PATH\n";
    }
    else{
        for(int v=n; v != -1 ; v=parent[v]){
            path.push_back(v);
        }
        reverse(path.begin(),path.end());
        for(auto it:path){
            cout<<it<<' ';
        }
    }          
    return 0;
}
