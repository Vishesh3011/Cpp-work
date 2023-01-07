#include<bits/stdc++.h>

using namespace std;

bool isCycle(int i, vector <vector <int>> &adj, vector <bool> &vis, vector <int> &stack){
    stack[i] = true;
    if(!vis[i]){
        vis[i] = true;
        for(auto it : adj[i]){
            if(stack[it])
                return true;
            if(!vis[it] and isCycle(it, adj, vis, stack))
                return true;
        }
    }
    stack[i] = false;
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
    }

    bool cycle = false;
    vector <int> stack (n, 0);
    vector <bool> vis (n, false);

    for(int i = 0; i < n; i++){
        if(!vis[i] and isCycle(i, adj, vis, stack)){
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