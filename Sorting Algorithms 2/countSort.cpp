#include<bits/stdc++.h>

using namespace std;

void countSort(vector <int> &arr){
    int n = arr.size();
    
    vector <int> count(10, 0);

    for(int i = 0; i < n; i++)
        count[arr[i]]++;
    
    for(int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // for(int i = 0; i < 10; i++)
    //     cout << count[i] << " ";
    
    vector <int> ans(n);

    for(int i = 0; i < n; i++){
        ans[count[arr[i]]] = arr[i];
        count[arr[i]]--;
    }

    for(int i = 1; i <= n; i++)
        cout << ans[i] << " ";
}

int main(){
    int n;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    countSort(arr);

    return 0;
}