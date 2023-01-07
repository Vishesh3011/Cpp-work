#include<bits/stdc++.h>

using namespace std;

// TC: O(n2)  SC: O(1)

void insertionSort(int * a, int n){
    for(int i = 0; i < n; i++){
        int current = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > current){
            swap(a[j], a[j + 1]);
            j--;
        }
    }

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    insertionSort(arr, n);

    return 0;
}