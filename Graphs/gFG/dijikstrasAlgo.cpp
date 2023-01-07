#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector <pair<int, int>> adj[n + 1];
    
    for(int i = 0; i < m; i++){
        int x, y, wt;
        cin >> x >> y >> wt;

        adj[x].push_back({y, wt});
        adj[y].push_back({x, wt});
    }

    priority_queue <pair <int, int>, vector <pair<int, int>>, greater<pair<int, int>>> pq;
    vector <int> distance(n + 1, INT_MAX);

    int start;
    cin >> start;
    distance[start] = 0;

    pq.push({0, start});

    while(!pq.empty()){
        int dist = pq.top().first;
        int prev = pq.top().second;
        pq.pop();

        for(auto i : adj[prev]){
            int next = i.first;
            int nextDist = i.second;

            if(distance[next] > nextDist + dist){
                distance[next] = nextDist + distance[prev];
                pq.push({distance[next], next});
            }
        }
    }

    cout << "Distance of " << start << " from others are : " << endl;
    for(int i = 1; i <= n; i++)
        cout << distance[i] << " ";

    return 0;
}