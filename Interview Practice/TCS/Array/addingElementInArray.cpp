#include<bits/stdc++.h>

using namespace std;

#define N 100;

void insertBeginning(vector <int> &v, int n, int value){
    for(int i = n - 1; i >= 0; i--)
        v[i + 1] = v[i];
    v[0] = value;
}

void insertEnd(vector <int> &v, int n, int value){
    v.push_back(value);
}

void insertAtPos(vector <int> &v, int n, int value, int pos){
    for(int i = n; i >= pos; i--)
        v[i] = v[i - 1];
    v[pos - 1] = value;
}


int main(){
    int n, sum = 0;
    cin >> n;

    vector <int> arr(n + 1);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    insertBeginning(arr, n, 6);
    insertEnd(arr, n, 7);
    insertAtPos(arr, n, 8, 4);

    for(auto i : arr)
        cout << i << " ";

    return 0;
}

