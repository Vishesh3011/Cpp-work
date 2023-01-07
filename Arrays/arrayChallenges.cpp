#include<iostream>

using namespace std;

void findMaxElement(int n, int a[]){
    int maxEle = INT_MIN;

    for(int i = 0; i < n; i++){
        // if(a[i] > maxEle)
        //     maxEle = a[i];
        maxEle = max(maxEle, a[i]);
    }
    cout<<maxEle;
}

void sumOfSubarrays(int n, int a[]){
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum = sum + a[j];
            cout<<sum<<endl;
        }
    }
}

// arrays with same common difference are called arithmetic array for ex: [3, 3, 3] difference = 1, [9, 7, 5, 3] difference = -2, etc...
void maxLengthArithmeticSubarray(int n, int a[]){
    int ans = 2;
    int j = 2;
    int pd = a[1] - a[0];
    int curr = 2;

    while(j < n){
        if(pd == a[j] - a[j - 1])
            curr++;
        else{
            pd = a[j] - a[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout<<ans;
}

void recordBreakingProblem(int n, int a[]){
    int ans = 0;
    int mx = -1;

    for(int i = 0; i < n; i++){
        if(a[i] > mx && a[i] > a[i + 1])
            ans++;
        mx = max(mx, a[i]); 
    }
    cout<< ans << endl; 
}

//doubt - nothing printed
void findMinIndex(int n, int a[]){
    const int N = 1e6+2;
    int idx[N];

    for(int i = 0; i < N; i++){
        idx[i] = -1;
    }
    
    int minIdx = INT_MAX;

    for(int i = 0; i < n; i++){
        if(idx[a[i]] != -1)
            minIdx = min(minIdx, idx[a[i]]);
        else
            idx[a[i]] = i;
    }

    if(minIdx == INT_MAX)
        cout << "-1";
    else
        cout << minIdx + 1 << endl;
}

//doubt - 8:04
void findSubarraySum(int n, int a[], int s){
    int currSum = 0, st = -1, en = -1, sum = 0;
    int i =0, j = 0;
    while(j < n && sum + a[j] < s){
        sum += a[j];
        j++;
    }
}

void findPositiveMissingValue(int n, int a[]){
    const int N = 1e6 + 2;
    bool check[N];

    for(int i = 0; i < N; i++){
        check[i] = false;
    }

    for(int i = 0; i < n; i++){
        if(a[i] >= 0)
            check[a[i]] = true;
    }

    for(int i = 0; i < 10; i++)
        if(check[i] == false){
            cout<< i;
            break;
        }
}

int main(){
    int n, S;
    cin>>n;

    //cin>>S;
    
    int array[n];

    // int array[n + 1];
    // array[n] = 0;

    for(int i = 0; i < n; i++)
        cin>>array[i];

    // findMaxElement(n, array);

    // sumOfSubarrays(n, array);

    // maxLengthArithmeticSubarray(n, array);
    
    // recordBreakingProblem(n, array);

    // findMinIndex(n, array);

    //findSubarraySum(n, array);

    findPositiveMissingValue(n ,array);

    return 0;
}