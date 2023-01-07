#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 2;

vector <int> adj[N];

void bFS(vector <int> adj[], int n){
    vector <int> ans;
    vector <bool> vis(n, false);
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            queue <int> q;
            vis[i] = 1;
            q.push(i);
            while(!q.empty()){
                int node = q.front();
                q.pop();
                ans.push_back(node);
                for(auto it : adj[node]){
                    if(!vis[it]){
                        q.push(it);
                        vis[it] = 1;
                    }
                }
            }
        }
    }
    for(auto i : ans)
        cout << i << " ";
}

int main(){
    int n, m;
    cin>>n>>m;
    
    int x, y;
    for(int i = 0; i < m; i++){
        cin>>x>>y;
        adj[x].push_back(y);
    }

    bFS(adj, n);

    return 0;
}