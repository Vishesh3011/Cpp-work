#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;

    cin >> n >> m;

    vector <pair <int, int>> adj[n];

    for(int i = 0; i < m; i++){
        int x, y, wt;
        cin >> x >> y >> wt;

        adj[x].push_back({y, wt});
        adj[y].push_back({x, wt});
    }

    int key[n];
    bool mST[n];
    int parent[n];

    for(int i = 0; i < n; i++){
        key[i] = INT_MAX;
        mST[i] = false;
    }

    key[0] = 0;
    parent[0] = -1;

    priority_queue <pair<int, int>, vector <pair<int, int>>, greater <pair<int, int>>> pq;
    pq.push({0, 0});

    for(int i = 0; i < n - 1; i++){
        int u = pq.top().second;
        pq.pop();

        mST[u] = true;
        for(auto it : adj[u]){
            int v = it.first;
            int wt = it.second;

            if(mST[v] == false && wt < key[v]){
                parent[v] = u;
                pq.push({key[v], v});
                key[v] = wt;
            }
        }
    }

    for(int i = 1; i < n; i++)
        cout << parent[i] << " " << i << endl;

    return 0;
}