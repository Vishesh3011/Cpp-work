#include<bits/stdc++.h>

using namespace std;

void countFrequency(vector <int> &v, int size){
    unordered_map <int, int> um;
    for(int i = 0; i < size; i++)
        um[v[i]]++;
    for(auto i : um)
        cout << i.first << " " << i.second << endl;
}

int main(){
    int n;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    countFrequency(arr, n);

    return 0;
}

