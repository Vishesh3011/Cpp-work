#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int floor = -1, ceil = -1;
    
    for(int i = 0; i < n; i++){
        if(x == arr[i])
            floor = arr[i];
        else if(x > arr[i] && arr[i + 1] >= x)
            floor = arr[i];
    }

    for(int i = 1; i < n; i++){
        if(x == arr[i])
            ceil = arr[i];
        else if(x < arr[i] && arr[i - 1] <= x)
            ceil = arr[i];
    }

    if(floor != -1)
        cout << floor << endl ;
    else
        cout << "floor doesn't exist in array" << endl;

    if(ceil != -1)
        cout << ceil;
    else
        cout << "ceil doesn't exist in array";
    
    return 0;
}