#include<bits/stdc++.h>

using namespace std;

void prodArrPuzzle(int a[], int n){
    int output[n];
    int temp = 1;
    for(int i = 0; i < n; i++){
        temp *= a[i];
        output[i] = temp;
    }

    temp = 1;
    for(int i = n - 1; i >= 0; i--){
        output[i] = temp * output[i - 1];
        temp *= a[i];
    }
    output[0] = temp;
    for(int i = 0; i < n; i++)
        cout << output[i] << " ";
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    prodArrPuzzle(arr, n);
    return 0;
}