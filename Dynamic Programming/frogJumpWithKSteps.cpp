#include<bits/stdc++.h>

using namespace std;

int frogJumpsWithK(vector <int> arr, vector <int> &dp, int i, int k){
    if(i == 0)
        return 0;

    int minSteps = INT_MAX;

    for(int it = 1; it <= k; it++){
        if(i >= it){
            // if(dp[i - it] != -1)

            int step = frogJumpsWithK(arr, dp, i - it, it) + abs(arr[i] - arr[i - it]);
            minSteps = min(minSteps, step);
        }
    }

    return minSteps;
}

int main(){
    int n;
    cin >> n;

    vector <int> arr(n);

    // Memoization
    // TC : O(n) * K 
    vector <int> dp(n + 1, -1);

    int k;
    cin >> k;

    cout << frogJumpsWithK(arr, dp, n - 1, k);

    return 0;
}