#include<bits/stdc++.h>

using namespace std;

void findRepeatingElements(vector <int> arr, int n){
    map <int , int> m;

    for(int i = 0; i < n; i++)
        m[arr[i]]++;

    for(auto i : m){
        if(i.second > 1)
            cout << i.first << " ";
    }
}

int main(){
    int n;
    cin >> n;

    vector <int> arr(n);
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    findRepeatingElements(arr, n);
}