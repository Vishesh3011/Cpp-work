#include<bits/stdc++.h>

using namespace std;

int findMinDiff(int a[], int m, int n){
    int diff;
    int minDiff = INT_MAX;
    sort(a, a + n);
    for(int i = 0; i + m - 1 < n; i++){
        diff = a[i + m - 1] - a[i];
        minDiff = min(minDiff, diff);
    }
    return minDiff;
}

int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin>>arr[i];
    cout<<"Minimum Difference : "<<findMinDiff(arr, m, n);
    return 0;
}