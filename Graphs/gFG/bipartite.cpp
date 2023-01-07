#include<bits/stdc++.h>

using namespace std;

bool dFSBipartite(vector <int> adj[], int node, vector <int> &color){
    for(auto i : adj[node]){
        if(color[i] == -1){
            color[i] = 1 - color[node];
            if(!dFSBipartite(adj, i, color))
                return false;
        }
        else if(color[i] == color[node])
            return false;
    }
    return true;
}

bool checkBipartite(vector <int> adj[], int n){
    vector <int> color(n + 1, -1);
    for(int i = 1; i <= n; i++){
        if(color[i] == -1){
            color[i] = 1;
            if(!dFSBipartite(adj, i, color))
                return false;
        }
    }
    return true;
}

int main(){
    int n, m;
    cin >> n >> m;

    vector <int> adj[n + 1];

    int x, y;
    for(int i = 0; i < m; i++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    if(checkBipartite(adj, n))
        cout << "Graph is Bipartite";
    else
        cout << "Graph is not Bipartite";
    return 0;
}