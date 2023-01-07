#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 2;

vector <int> adj[N];
vector <bool> vis(N, 0);

void dFS(int n){
    if(!vis[n]){
        cout << n << " ";
        vis[n] = 1;
        for(auto i : adj[n]){
            if(!vis[i])
                dFS(i);
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;

    int x, y;
    for(int i = 0; i < m; i++){
        cin >> x >> y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    int V;
    cin >> V;

    dFS(V);

    return 0;
}