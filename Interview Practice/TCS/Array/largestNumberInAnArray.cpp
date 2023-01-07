#include<bits/stdc++.h>

using namespace std;

void findLargest(vector <int> v, int size){
    int largest = INT_MIN;
    for(int i = 0; i < size; i++)
        largest = max(largest, v[i]);
    cout << largest;
}

int main(){
    int n;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    // Brute Force Approach
    // sort(arr.begin(), arr.end());
    // cout << arr[n - 1];

    // Optimal Solution
    findLargest(arr, n);
    
    return 0;
}