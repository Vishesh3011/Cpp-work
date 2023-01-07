#include<bits/stdc++.h>

using namespace std;

void countSort(int a[], int n, int exp){
    int output[n];
    int count[10] = {0};

    for(int i = 0; i < n; i++)
        count[(a[i] / exp) % 10]++;
    
    for(int i = 1; i < 10; i++)
        count[i] += count[i - 1];
    
    for(int i = n - 1; i >= 0; i--){
        output[count[(a[i] / exp) % 10] - 1] = a[i];
        count[(a[i] / exp) % 10]--;
    }

    for(int i = 0; i < n; i++)
        a[i] = output[i];
}

void radixSort(int a[], int n){
    int m = INT_MIN;

    for(int i = 0; i < n; i++)
        m = max(m, a[i]);

    for(int i = 1; m / i > 0; i = i * 10)
        countSort(a, n, i);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    radixSort(arr, n);

    for(int i = 0; i < n; i++)
        cout <<  arr[i] << " ";

    return 0;
}