#include<bits/stdc++.h>

using namespace std;

int findEquilibrium(vector <int> &v, int n){
    int totalSum = 0;

    for(int i = 0; i < n; i++)
        totalSum += v[i];

    int leftSum = 0, rightSum = totalSum;

    for(int i = 0; i < n; i++){
        rightSum -= v[i];
        if(leftSum == rightSum)
            return i;
        leftSum += v[i];
    }
    
    return -1;
}

int main(){
    int n, sum = 0;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << findEquilibrium(arr, n);

    return 0;
}

