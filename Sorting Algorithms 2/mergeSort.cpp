#include<bits/stdc++.h>

using namespace std;

void merge(vector <int> &arr, int l, int mid, int r){
    int n = mid - l + 1;
    int m = r - mid;

    vector <int> a(n), b(m);

    for(int i = 0; i < n; i++)
        a[i] = arr[l + i];
    
    for(int i = 0; i < n; i++)
        b[i] = arr[mid + i + 1];

    int i = 0, j = 0, k = l;

    while(i < n && j < m){
        if(a[i] > b[j]){
            arr[k] = b[j];
            j++;
            k++;
        }
        else{
            arr[k] = a[i];
            i++;
            k++;
        }
    }

    while(i < n){
        arr[k] = a[i];
        i++;
        k++;
    }

    while(j < m){
        arr[k] = b[j];
        j++;
        k++;
    }
}

void mergeSort(vector <int> &arr, int l, int r){
    if(l < r){
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main(){
    int n;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(arr, 0, n - 1);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}