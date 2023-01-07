#include<iostream>

using namespace std;

void waveSort(int a[], int n){
    for(int i = 1; i < n; i += 2){
        if(a[i] > a[i - 1])
            swap(a[i], a[i - 1]);
        if(a[i + 1] < a[i] && i <= n - 2)
            swap(a[i], a[i + 1]);
    }
}

int main(){
    int n;
    cin>>n;

    int array[n];
    for(int i = 0; i< n; i++)
        cin>>array[i];

    waveSort(array, n);

    for(int i = 0; i < n; i++)
        cout<<array[i]<<" ";

    return 0;
}