#include<bits/stdc++.h>

using namespace std;

bool isCycle(int i, vector <vector <int>> &adj, vector <bool> &vis, int parent){
    vis[i] = true;
    for(auto it : adj[i]){
        if(it != parent){
            if(vis[it])
                return true;
            if(!vis[it] and isCycle(it, adj, vis, i))
                return true;
        }
    }
    return false;
}

int main(){
    int n, m;
    cin>>n>>m;

    vector <vector <int>> adj(n);
    int x, y;
    for(int i = 0; i < m; i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    bool cycle = false;
    vector <bool> vis (n, false);

    for(int i = 0; i < n; i++){
        if(!vis[i] and isCycle(i, adj, vis, -1)){
            cycle = true;
            break;
        }
    }
    if(cycle == true)
        cout<<"Cycle is present.";
    else
        cout<<"Cycle not present.";

    return 0;
}