#include<bits/stdc++.h>

using namespace std;

void topologicalSort(vector <int> adj[], vector <bool> &vis, int node, stack <int> &s){
    vis[node] = true;
    for(auto it : adj[node]){
        if(!vis[it])
            topologicalSort(adj, vis, it, s);
    }
    s.push(node);
}

int main(){
    int n, m;
    cin >> n >> m;

    vector <int> adj[n + 1];
    vector <bool> vis(n, false);

    int x, y;
    for(int i = 0; i < m; i++){
        cin >> x >> y;
        adj[x].push_back(y);
    }

    stack <int> s;
    
    for(int i = 1; i <= n; i++){
        if(!vis[i])
            topologicalSort(adj, vis, i, s);
    }

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}