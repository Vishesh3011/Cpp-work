#include<bits/stdc++.h>

using namespace std;

void rotateToLeft(vector <int> v, int n, int k){
    k = k % n;
    vector <int> temp(n);

    for(int i = 0; i < n; i++)
        temp[i] = v[i];
        
    for(int i = 0; i < n; i++)
        v[i] = temp[(n - k + i) % n];

    for(int i = 0; i < n; i++)
        cout << v[i] << " ";
}

void rotateToRight(vector <int> &v, int n, int k){
    k = k % n;
    vector <int> temp(n);

    for(int i = 0; i < n; i++)
        temp[i] = v[i];

    for(int i = 0; i < n; i++){
        int j = k + i - n;
        if(j < 0)
            j = n + j;

        v[i] = temp[j % n];
    }
    
    for(int i = 0; i < n; i++)
        cout << v[i] << " ";
}

int main(){
    int n, sum = 0;
    cin >> n;

    vector <int> arr(n);
    vector <int> temp(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    int k;
    cin >> k;

    rotateToLeft(arr, n, k);
    cout << endl;
    rotateToRight(arr, n, k);

    return 0;
}

