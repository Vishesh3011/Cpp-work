#include<bits/stdc++.h>

using namespace std;

vector <vector <int>> adj;
vector <bool> vis;
vector <int> col;
bool bipartite;

void color(int node, int curr){
    if(col[node] != -1 and col[node] != curr){
        bipartite = false;
        return;
    }
    col[node] = curr;
    if(vis[node])
        return;
    vis[node] = true;
    for(auto i : adj[node]){
        if(curr == 0)
            color(i, 1);
        else
            color(i, 0);
    }
}

int main(){
    bipartite = true;
    int n, m;
    cin>>n>>m;

    adj = vector <vector<int>> (n);
    vis = vector <bool> (n, false);
    col = vector <int> (n, -1);

    for(int i = 0; i < m; i++){
        int x, y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i = 0; i < n; i++){
        if(!vis[i])
            color(i, 0);
    }

    if(bipartite == true)
        cout<<"Bipartite Graph";
    else
        cout<<"Not Bipartite";

    return 0;
}