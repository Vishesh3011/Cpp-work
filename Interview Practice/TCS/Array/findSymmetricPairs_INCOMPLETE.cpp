#include<bits/stdc++.h>

using namespace std;

void findSymmetricPair(vector <vector <int>> &v, int n, int m){
    unordered_map <int , int> um;
    for(int i = 0; i < n; i++){
        int first = v[i][0];
        int second = v[i][1];

        if(um.find(second) != um.end() && um[second] == first)
            cout << first << " " << second << endl;
        else
            um[first] = second;
    }
}

int main(){
    int n, m;
    cin >> n >> m;

    vector <vector <int>> arr(n);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];
    }

    findSymmetricPair(arr, n, m);

    return 0;
}