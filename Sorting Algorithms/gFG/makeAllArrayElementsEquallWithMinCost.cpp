#include<bits/stdc++.h>

using namespace std;

void findArrMinCost(int a[], int n){
    int y;
    if(n % 2 == 1)
        y = a[n / 2];
    else
        y = (a[n / 2] + a[n - 2 / 2]) / 2;
    int s = 0;
    for(int i = 0; i < n; i++)
        s += abs(a[i] - y);
    cout << s;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    findArrMinCost(arr, n);
    return 0;
}