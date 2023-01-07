#include<bits/stdc++.h>

using namespace std;

int findMinJumps(vector <int> arr, int i, vector <int> &dp){
    if(i == 0)
        return 0;
    
    if(dp[i] != -1)
        return dp[i];

    int left = findMinJumps(arr, i - 1, dp) + abs(arr[i] - arr[i - 1]);

    int right = INT_MAX;

    if(i > 1)
        right = findMinJumps(arr, i - 2, dp) + abs(arr[i] - arr[i - 2]);
    
    
    dp[i] = min(left, right);

    return min(left, right);
}

int main(){
    int n;
    cin >> n;

    vector <int> arr(n);

    // Memorization 
    // TC : O(n) SC: O(n) + O(n)
    vector <int> dp(n + 1, -1);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << findMinJumps(arr, n - 1, dp) << endl;

    //Tabulation 
    // TC : O(n) SC : O(n)
    vector <int> dp1(n + 1, -1);
    dp1[0] = 0;
    for(int i = 1; i < n; i++){
        int first = dp1[i - 1] + abs(arr[i] - arr[i - 1]);
        int second = INT_MAX;
        if(i > 1)
            second = dp1[i - 2] + abs(arr[i] - arr[i - 2]);
        dp1[i] = min(first, second);
    }
    cout << dp1[n - 1] << endl;

    //Tabulation 
    // TC : O(n) SC : O(1)
    int prev = 0;
    int prev2 = 0;
    for(int i = 1; i < n; i++){
        int first = prev + abs(arr[i] -  arr[i - 1]);
        int second = INT_MAX;
        if(i > 1)
            second = prev2 + abs(arr[i] - arr[i - 2]);
        int currI = min(first, second);
        prev2 = prev;
        prev = currI;
    }
    cout << prev;

    return 0;
}