#include<bits/stdc++.h>

using namespace std;

void pairFound(int a[], int n, int k){
    unordered_map <int, int> um;
    for(int i = 0; i < n; i++)
        um[a[i]]++;
    for(int i = 0; i < n; i++){
        if(um.find(k + a[i]) != um.end()){
            cout << "Pair Found: (" << a[i] << ", " << k + a[i] << ")";
            return;
        }
    }
    cout << "No pair found.";
}

int main(){
    int n, k;
    cin >> n >> k;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // int a, b;

    // bool pair = false;

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         if(i != j && arr[j] - arr[i] == k){
    //             a = arr[i];
    //             b = arr[j];
    //             pair = true;
    //             break;
    //         }
    //     }
    // }

    // if(pair)
    //     cout << "Pair Found: (" << a << ", " << b << ")";
    // else
    //     cout << "No such pair";

    pairFound(arr, n, k);

    return 0;
}