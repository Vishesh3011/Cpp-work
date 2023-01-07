#include<bits/stdc++.h>

using namespace std;

bool myFunc(pair <int, int> a, pair <int, int> b){
    if(a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

void sortByFrequency(vector <int> arr, int n){
    map <int , int> mp;
    vector <pair<int, int>> v;

    for(int i = 0; i < n; i++)
        mp[arr[i]]++;
    
    for(auto i : mp)
        v.push_back(make_pair(i.first, i.second));

    sort(v.begin(), v.end(), myFunc);
    
    for(auto i : v){
        while(i.second > 0){
            cout << i.first << " ";
            i.second--;
        }
    }
}

int main(){
    int n;
    cin >> n;

    vector <int> arr(n);
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sortByFrequency(arr, n);
}