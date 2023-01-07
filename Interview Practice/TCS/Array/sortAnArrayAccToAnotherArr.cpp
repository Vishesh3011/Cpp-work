#include<bits/stdc++.h>

using namespace std;

void sortArr(vector <int> arr1, vector <int> arr2, int n, int m){
    map <int , int> mp;
    vector <int> ans;

    for(int i = 0; i < n; i++)
        mp[arr1[i]]++;

    for(int i = 0; i < m; i++){
        if(mp[arr2[i]] != 0){
            for(int j = 1; j <= mp[arr2[i]]; j++)
                ans.push_back(arr2[i]);
        }
        mp.erase(arr2[i]);
    }

    for(auto i : mp){
        for(int j = 1; j <= i.second; j++)
            ans.push_back(i.first);
    }

    for(auto i : ans)
        cout << i << " ";
}

int main(){
    int n, m;
    cin >> n >> m;

    vector <int> arr1(n);
    vector <int> arr2(m);
    
    for(int i = 0; i < n; i++)
        cin >> arr1[i];

    for(int i = 0; i < m; i++)
        cin >> arr2[i];

    sortArr(arr1, arr2, n, m);
}