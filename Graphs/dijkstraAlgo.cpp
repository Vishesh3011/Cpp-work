#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector <vector <pair <int , int>>> g(n + 1);
    vector <int> dist(n + 1, INT_MAX);

    for(int i = 0; i < m; i++){
        int x, y, wt;
        cin >> x >> y >> wt;
        g[x].push_back({y, wt});
        g[y].push_back({x, wt});
    }

    int source;
    cin >> source;

    dist[source] = 0;

    set <pair <int, int>> s;

    s.insert({0, source});

    while(!s.empty()){
        auto x = *(s.begin());
        s.erase(x);
        for(auto i : g[x.second]){
            if(dist[i.first] > dist[x.second] + i.second){
                s.erase({dist[i.first], i.first});
                dist[i.first] = dist[x.second] + i.second;
                s.insert({dist[i.first], i.first});
            }
        }
    }

    for(int i = 1; i <= n; i++){
        if(dist[i] < INT_MAX)
            cout << dist[i] << " ";
        else
            cout << -1 << " ";
    }

    return 0;
}