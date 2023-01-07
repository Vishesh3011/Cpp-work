#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 1; i < n; i++){
        int value = arr[i];
        int j = i;
        while(j > 0 && arr[j - 1] > value){
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = value;
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}