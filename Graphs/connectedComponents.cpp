#include<bits/stdc++.h>

using namespace std;

vector <vector<int>> adj;
vector <int> components;
vector <bool> vis;


int getComp(int idx){
    if(vis[idx])
        return 0;
    vis[idx] = true;
    int ans = 1;
    for(auto i : adj[idx]){
        if(!vis[i]){
            ans += getComp(i);
            vis[i] = true;
        }
    }
    return ans;
}

int main(){
    int n, m;
    cin>>n>>m;

    adj = vector <vector <int>> (n);

    vis = vector <bool> (n); 

    for(int i = 0; i < m; i++){
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for(int i = 0; i < n; i++){
        if(!vis[i]){
            components.push_back(getComp(i));
        }
    }

    // for(auto i : components)
    //     cout<<i<<" ";

    long long ans = 0;
    for(auto i : components)
        ans += i * (n - i);

    cout<<ans / 2;

    return 0;
}