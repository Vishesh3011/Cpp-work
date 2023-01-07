#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector <vector <int>> edges;
    for(int i = 0; i< m; i++){
        int u, v, wt;
        cin >> u >> v >> wt;
        edges.push_back({u, v, wt});
    }

    int src;
    cin >> src;

    vector <int> dist(n, INFINITY);
    dist;

    return 0;
}