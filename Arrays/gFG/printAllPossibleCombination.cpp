#include<bits/stdc++.h>

using namespace std;

void comBos(int a[], int n, int r, int index, int data[], int i){
    if(index == r){
        for(int j = 0; j < r; j++)
            cout<<data[j]<<" ";
        cout<<endl;
        return;
    }

    if(i >= n)
        return;

    data[index] = a[i];

    comBos(a, n, r, index + 1, data, i + 1);

    while(a[i] == a[i + 1])
        i++;

    comBos(a, n, r, index, data, i + 1);
}

void printAllCombos(int a[], int n, int r){
    int data[r];

    sort(a, a + n);

    comBos(a, n, r, 0, data, 0);
}

int main(){
    int n, r;
    cin>>n>>r;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin>>arr[i];
    
    printAllCombos(arr, n, r);

    return 0;
}