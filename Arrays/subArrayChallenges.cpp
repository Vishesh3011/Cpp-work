#include<iostream>

using namespace std;

int findSubArray(int n, int a[]){
    int maxSum = INT_MIN;

    //brute force approach
    // for(int i = 0; i < n; i++){
    //     for(int j = i; j < n; j++){
    //         int sum = 0;
    //         for(int k = i; k <= j; k++){
    //             sum = sum + a[k];
    //         }
    //         maxSum = max(sum, maxSum);
    //     }
    // }

    //cummulative sum approach
    //doubt - 6:15
    // int cumSum[n + 1];
    // cumSum[0] = 0;

    // for(int i = 1; i <= n; i++)
    //     cumSum[i] = cumSum[i - 1] + a[i - 1];
    
    // for(int i = 1; i <= n; i++){
    //     int sum = 0;
    //     for(int j = 0; j < i; j++){
    //         sum = cumSum[i] - cumSum[j];
    //         maxSum = max(maxSum, sum);
    //     }
    // }

    //kadane's algorithm

    int currSum = 0;

    for(int i = 0; i < n; i++){
        currSum = currSum + a[i];
        if(currSum < 0)
            currSum = 0;
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

void maxCircularSubArraySum(int n, int a[]){
    int wrapSum;
    int nonWrapSum;

    nonWrapSum = findSubArray(n, a);
    int totalSum = 0;

    for(int i = 0; i < n; i++){
        totalSum = totalSum + a[i];
        a[i] = -a[i];
    }

    wrapSum = totalSum + findSubArray(n , a);

    cout<< max(wrapSum, nonWrapSum) << endl;
}

bool pairSumProblem(int n, int a[], int key){
    //brute force approach
    // for(int i = 0; i < n - 1; i++){
    //     for(int j = i + 1; j < n; j++){
    //         if(a[i] + a[j] == key){
    //             cout<<i<<" "<<j<<endl;
    //             return true;
    //         }
    //     }
    // }

    //better approach only possible if elements are sorted
    int low = 0, high = n - 1;
    while(low <= high){
        if(a[low] + a[high] == key){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(a[low] + a[high] < key)
            low++;
        else
            high--;
    }
    return false;
}

int main(){
    int n, k;
    cin>>n;

    cin>>k;

    int array[n];

    for(int i = 0; i < n; i++){
        cin>>array[i];
    }

    // findSubArray(n , array);

    // maxCircularSubArraySum(n, array);

    cout<<pairSumProblem(n, array, k);

    return 0;
}