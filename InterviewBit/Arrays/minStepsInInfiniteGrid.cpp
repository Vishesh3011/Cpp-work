int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int ans = 0;
    for(int i = 0; i < A.size() - 1; i++){
        int a, b;
        a = abs(A[i + 1] - A[i]);
        b = abs(B[i + 1] - B[i]);
        ans += max(a, b);
    }
    return ans;
}
