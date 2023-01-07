#include<bits/stdc++.h>

#define v1 vector <int>
#define vv vector <v1>
#define p pair <int , int>
#define v2 vector <p>
#define rep(i, a, b) for(int i = a; i < b; i++)

using namespace std;

const int N = 1e5 + 2;

v1 adj[N];

int main(){
    // int n, m;
    // cin>>n>>m;

    // vv adjm(n + 1, v1(n + 1, 0));

    // rep(i, 0, m){
    //     int x, y;
    //     cin>>x>>y;

    //     adjm[x][y] = 1;
    //     adjm[y][x] = 1;
    // }

    // rep(i, 1, n + 1){
    //     rep(j, 1, n + 1)
    //         cout<<adjm[i][j]<<" ";
    //     cout<<endl;
    // }

    // if(adjm[3][7] == 1)
    //     cout<<"There's an edge between 3 and 7";
    // else
    //     cout<<"No edge between 3 and 7";

    int n, m;
    cin>>n>>m;

    rep(i, 0, m){
        int x, y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    rep(i, 1, n + 1){
        cout<< i << " -> ";
        vector <int> :: iterator it;
        for(it = adj[i].begin(); it != adj[i].end(); it++)
            cout<<*it<<" ";
        cout<<endl;
    }

    return 0;
}