#include<bits/stdc++.h>

using namespace std;

bool hasCycle(vector <int> adj[], vector <bool> &vis, int node, int parent){
    vis[node] = true;
    for(auto i : adj[node]){
        if(i != parent){
            if(vis[i])
                return true;
            if(!vis[i] && hasCycle(adj, vis, i, node))
                return true;
        }
    }
    return false;
}

int main(){
    int n, m;
    cin >> n >> m;

    vector <int> adj[n + 1];
    vector <bool> vis(n + 1, false);

    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    bool cycle = false;

    for(int i = 0; i < n; i++){
        if(!vis[i] && hasCycle(adj, vis, i ,-1)){
            cycle = true;
        }
    }

    if(cycle)
        cout << "Cycle is Present";
    else
        cout << "Cycle not Present";

    return 0;
}