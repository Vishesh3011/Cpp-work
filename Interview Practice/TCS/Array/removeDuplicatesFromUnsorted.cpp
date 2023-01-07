#include<bits/stdc++.h>

using namespace std;

void removeDuplicatesUsingAnotherArray(vector <int> arr, int n){
    int storeZero[n] = {1};

    for(int i = 0; i < n; i++){
        if(storeZero[i] == 1){
            for(int j = i + 1; j < n; j++){
                if(arr[i] == arr[j])
                    storeZero[j] = 0;
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(storeZero[i] == 0)
            cout << arr[i] << " ";
    }
}

void removeDuplicatesUsingHashMap(vector <int> arr, int n){
    unordered_map <int , int> um;
    for(int i = 0; i < n; i++){
        if(um.find(arr[i]) == um.end()){
            cout << arr[i] << " ";
            um[arr[i]]++;
        }
    }
}

int main(){
    int n, sum = 0;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // removeDuplicatesUsingAnotherArray(arr, n);
    removeDuplicatesUsingHashMap(arr, n);

    return 0;
}

