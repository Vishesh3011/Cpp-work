#include<bits/stdc++.h>

using namespace std;

struct node {
    int x, y, wt;
    node(int u, int v, int z){
        x = u;
        y = v;
        wt = z;
    }
};

int main(){
    int n, m;
    cin >> n >> m;

    vector <node> adj;
    vector <int> distance(n, INT_MAX);

    int x, y, wt;
    for(int i = 0; i < m; i++){
        cin >> x >> y >> wt;

        adj.push_back(node(x, y, wt));
    }

    int source = 0;
    distance[source] = 0;

    for(int i = 1; i <= n - 1; i++){
        for(auto it : adj){
            if(distance[it.x] + it.wt < distance[it.y])
                distance[it.y] = distance[it.x] + it.wt;
        }
    }

    bool negCycle = false;

    for(auto it : adj){
        if(distance[it.x] + it.wt < distance[it.y]){
            negCycle = true;
            break;
        }
    }

    if(!negCycle){
        for(int i = 1; i < n; i++)
            cout << distance[i] << " ";
    }
    else
        cout << "There is exists a Negative Cycle";

    return 0;
}