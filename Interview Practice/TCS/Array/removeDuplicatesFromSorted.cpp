#include<bits/stdc++.h>

using namespace std;

int removeDuplicatesUsingTwoPointers(vector <int> &v, int size){
    int i = 0;
    for(int j = 0; j < size; j++){
        if(v[i] != v[j]){
            i++;
            v[i] = v[j];
        }
    }
    return i + 1;
}

int removeDuplicatesUsingSet(vector <int> &v, int size){
    set <int> set;
    for(auto i : v)
        set.insert(i);
    int j = 0;
    for(auto i : set){
        v[j] = i;
        j++;
    }
    return j;
}

void removeDuplicatesFromSorted(vector <int> &v, int size){
    unordered_map <int, int> mp;
    for(int i = 0; i < size; i++){
        if(mp.find(v[i]) == mp.end()){
            mp[v[i]]++;
            cout << v[i] << " ";
        }
    }
}

int main(){
    int n, sum = 0;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    //int k = removeDuplicatesUsingTwoPointers(arr, n);
    int k = removeDuplicatesUsingSet(arr, n);

    // for(int i = 0; i < k; i++)
    //     cout << arr[i] << " ";
    
    removeDuplicatesFromSorted(arr, n);

    return 0;
}

