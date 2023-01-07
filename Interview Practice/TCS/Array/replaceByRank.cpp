#include<bits/stdc++.h>

using namespace std;

void replaceByRank(vector <int> arr, int n){
    map <int , int> mp;
    vector <int> dummy(n);

    for(int i = 0; i < n; i++)
        dummy[i] = arr[i];

    sort(dummy.begin(), dummy.end());

    int temp = 1;

    for(int i = 0; i < n; i++){
        if(mp[dummy[i]] == 0){
            mp[dummy[i]] = temp;
            temp++;
        }
    }
    
    for(int i = 0; i < n; i++)
        cout << mp[arr[i]] << " ";
}

int main(){
    int n;
    cin >> n;

    vector <int> arr(n);
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    replaceByRank(arr, n);
}