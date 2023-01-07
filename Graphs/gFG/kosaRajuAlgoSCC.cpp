#include<bits/stdc++.h>

using namespace std;

void dFS(vector <int> adj[], vector <bool> &vis, int node, stack <int> &s){
    vis[node] = true;
    for(auto i : adj[node]){
        if(!vis[i])
            dFS(adj, vis, i, s);
    }

    s.push(node);
}

void revDFS(vector <int> adj[], vector <bool> &vis, int node){
    vis[node] = true;
    cout << node << " ";
    for(auto i : adj[node]){
        if(!vis[i])
            revDFS(adj, vis, i);
    }
}

int main(){
    int n, m;
    cin >> n >> m;

    vector <int> adj[n + 1];
    vector <bool> vis(n + 1, false);
    vector <int> transpose[n + 1];
    stack <int> s;

    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;

        adj[x].push_back(y);
    }

    for(int i = 1; i <= n; i++){
        if(!vis[i])
            dFS(adj, vis, i, s);
    }

    for(int i = 1; i <= n; i++){
        vis[i] = false;
        for(auto it : adj[i])
            transpose[it].push_back(i);
    }

    int count = 0;
    while(!s.empty()){
        int node = s.top();
        s.pop();
        if(!vis[node]){
            cout << "SCC: ";
            revDFS(transpose, vis, node);
            cout << endl;
            count++;
        }
    }
    
    cout << count;

    return 0;
}