#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 2;
vector <int> adj[N];
bool vis[N];

void dFS(int node){
    vis[node] = 1;
    cout<< node << " ";
    vector <int> :: iterator  it;
    for(it = adj[node].begin(); it != adj[node].end(); it++){
        if(!vis[*it])
            dFS(*it);
    } 
}

int main(){
    int n, m;
    cin>>n>>m;
    
    for(int i = 0; i <= n; i++)
        vis[i] = 0;
    
    int x, y;
    for(int i = 0; i < m; i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dFS(1);

    return 0;
}