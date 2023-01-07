#include<bits/stdc++.h>

using namespace std;

void findSecondSmallestLargest(vector <int> &v, int size){
    int largest = INT_MIN, smallest = INT_MAX;
    int secondLargest = INT_MIN, secondSmallest = INT_MAX;
    for(int i = 0; i < size; i++){
        smallest = min(smallest, v[i]);
        largest = max(largest, v[i]);
    }
    
    for(int i = 0; i < size; i++){
        if(v[i] != smallest && v[i] < secondSmallest)
            secondSmallest = v[i];
        if(v[i] != largest && v[i] > secondLargest)
            secondLargest = v[i];
    }

    cout << secondSmallest << " " << secondLargest;
}

int main(){
    int n;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i< n; i++)
        cin >> arr[i];

    findSecondSmallestLargest(arr, n);

    return 0;
}

