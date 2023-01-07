#include<bits/stdc++.h>

using namespace std;

void findSmallestNumber(vector <int> &v, int size){
    int smallest = INT_MAX;
    for(int i = 0; i < size; i++)
        smallest = min(smallest, v[i]);
    cout << smallest;
}

int main(){
    int n;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // Brute-Force Approach
    // sort(arr.begin(), arr.end());

    // cout << arr[0];
    
    // Optimal
    findSmallestNumber(arr, n);

    return 0;
}

