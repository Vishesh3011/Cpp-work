#include<bits/stdc++.h>

using namespace std;

bool hasCycle(vector <int> adj[], vector <bool> &vis, vector <bool> &dFSVis, int node){
    vis[node] = true;
    dFSVis[node] = true;
    for(auto i : adj[node]){
        if(!vis[i] && hasCycle(adj, vis, dFSVis, i))
            return true;
        else if(dFSVis[i])
            return true;
    }
    dFSVis[node] = 0;
    return false;
}

int main(){
    int n, m;
    cin >> n >> m;

    vector <int> adj[n + 1];
    vector <bool> vis(n + 1, false);
    vector <bool> dFSVis(n + 1, false);

    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;

        adj[x].push_back(y);
    }

    bool cycle = false;

    for(int i = 0; i < n; i++){
        if(!vis[i]){
            if(hasCycle(adj, vis, dFSVis, i)){
                cycle = true;
                break;
            }
        }
    }

    if(cycle)
        cout << "Cycle is Present.";
    else
        cout << "Cycle is Not Present";

    return 0;
}