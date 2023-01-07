#include<bits/stdc++.h>

using namespace std;

// TC: O(n2)  SC: O(1)

void selectionSort(int * arr, int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    selectionSort(arr, n);

    return 0;
}