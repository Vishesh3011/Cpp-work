#include<bits/stdc++.h>

using namespace std;

int searchForK(vector <int> v, int n, int k){
    int start = 0, end = n- 1;
    while(start <= end){
        int mid = (start + end) / 2;
        if(v[mid] > k)
            end = mid - 1;
        else if(v[mid] < k)
            start = mid + 1;
        else
            return mid;
    }
    return -1;
}

int main(){
    int n;
    cin >> n;

    int k;
    cin >> k;

    vector <int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());
    cout << searchForK(arr, n, k);

    return 0;
}