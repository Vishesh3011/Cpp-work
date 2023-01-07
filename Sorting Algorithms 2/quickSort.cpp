#include<bits/stdc++.h>

using namespace std;

int partition(vector <int> &arr, int l, int r){
    int pivot = arr[r];
    int pivotIndex = l;

    for(int i = l; i < r; i++){
        if(arr[i] <= pivot){
            swap(arr[i], arr[pivotIndex]);
            pivotIndex++;
        }
    }
    swap(arr[pivotIndex], arr[r]);
    return pivotIndex;
}

void quickSort(vector <int> &arr, int l, int r){
    if(l < r){
        int pivot = partition(arr, l, r);
        quickSort(arr, l, pivot - 1);
        quickSort(arr, pivot + 1, r);
    }
}

int main(){
    int n;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    quickSort(arr, 0, n - 1);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}