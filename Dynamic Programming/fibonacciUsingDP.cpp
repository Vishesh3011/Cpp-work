#include<bits/stdc++.h>

using namespace std;

// Memorization TC: O(n) SC: O(n) + O(n)
int fibonacci(vector <int> dp, int n){
    if(n <= 1)
        return n;
    if(dp[n] != -1)
        return dp[n];
    return fibonacci(dp, n - 1) + fibonacci(dp, n - 2);
}

int main(){
    int n;
    cin >> n;

    vector <int> dp(n + 1, -1);

    cout << fibonacci(dp, n) << endl;

    // Tabulation

    // Brute-force TC: O(n) SC: O(n)
    vector <int> dp1(n + 1, -1);
    dp1[0] = 0;
    dp1[1] = 1;
    for(int i = 2; i <= n; i++)
        dp1[i] = dp1[i - 1] + dp1[i - 2];

    cout << dp1[n] << endl;


    // Optimized: TC: O(n) SC: O(1)
    int prev2 = 0;
    int prev = 1;
    for(int i = 2; i <= n; i++){
        int currI = prev + prev2;
        prev2 = prev;
        prev = currI;
    }

    cout << prev;

    return 0;
}