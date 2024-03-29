#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int count = 0;
    vector <vector <int>> adj(n);
    vector <int> indeg (n, 0);

    int x, y;
    for(int i = 0; i < m; i++){
        cin>>x>>y;
        adj[x].push_back(y);
        indeg[y]++;
    }
    queue <int> q;
    for(int i = 0; i < n; i++){
        if(indeg[i] == 0){
            q.push(i);
        }
    }
    while(!q.empty()){
        count++;
        int node = q.front();
        q.pop();
        cout<< node << " ";
        for(auto it : adj[node]){
            indeg[it]--;
            if(indeg[it] == 0)
                q.push(it);
        }
    }

    return 0;
}