#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    vector <int> ans;

    int minNum = INT_MAX;

    for(int k = 1; k <= n; k++){
        int maxNum = INT_MIN;
        for(int i = 0; i <= n - k; i++){
            int minNum = arr[i];
            for(int j = 1; j < k; j++)
                minNum = min(minNum, arr[i + j]);
            maxNum = max(maxNum, minNum);
        }
        cout << maxNum << " ";
    }

    return 0;
}