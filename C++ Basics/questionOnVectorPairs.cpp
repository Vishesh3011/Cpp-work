#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];

    vector <pair <int, int>> v;

    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    for(int i = 0; i < n; i++){
        v.push_back(make_pair(a[i], i));
    } 
  
    sort(v.begin(), v.end());

    for(auto i : v)
        cout<<i.first<<" "<<i.second<<endl;

    for(int i = 0; i < n; i++){
        a[v[i].second] = i;
    }

    for(int i = 0; i< n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}