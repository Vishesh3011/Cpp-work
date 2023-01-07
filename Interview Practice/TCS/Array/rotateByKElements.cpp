#include<bits/stdc++.h>

using namespace std;

void rotateByKElements(vector <int> &v, int n, int k){
    k = k % n;
    int temp[n];
    for(int i = 0; i < n; i++)
        temp[i] = v[i];
    for(int i = 0; i < n; i++){
        v[i] = temp[(n - k + i) % n];
    }
}

int main(){
    int n, sum = 0;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    int k;
    cin >> k;

    rotateByKElements(arr, n, k);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

