#include<iostream>

using namespace std;

long long merge(int arr[], int l, int mid, int r){
    long long inv = 0;
    int n = mid - l + 1;
    int m = r - mid;

    int a[n], b[m];

    for(int i = 0; i < n; i++)
        a[i] = arr[l + i];

    for(int i = 0; i < m; i++)
        b[i] = arr[mid + 1 + i];
    
    int i = 0, j = 0, k = l;

    while(i < n && j < m){
        if(a[i] < b[j]){
            arr[k] = a[i];
            i++;
            k++;
        }
        else{
            arr[k] = b[j];
            inv +=  n - i;
            j++;
            k++;
        }
    }

    while(i < n){
        arr[k] = a[i];
        k++;
        i++;
    }

    while(j < n){
        arr[k] = b[j];
        k++;
        j++;
    }

    return inv;
}


long long mergeSort(int a[], int l, int r){
    long long inv = 0;
    if(l < r){
        int mid = (l + r) / 2;
        inv += mergeSort(a, l , mid);
        inv += mergeSort(a, mid + 1, r);
        inv += merge(a, l , mid, r);
    }
    return inv;
}

int main(){
    int n;
    cin>>n;

    int array[n];
    for(int i = 0 ; i < n; i++)
        cin>>array[i];

    cout<<mergeSort(array, 0, n - 1);

    return 0;
}