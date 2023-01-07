#include<bits/stdc++.h>

using namespace std;

void reverse(vector <int> &v, int size){
    int i = 0, j = size - 1;
    while(i <= j){
        swap(v[i], v[j]);
        i++;
        j--;
    }
}

int main(){
    int n;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    // reverse(arr.begin(), arr.end());

    // for(int i = 0; i < n; i++)
    //     cout << arr[i] << " ";

    reverse(arr, n);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

