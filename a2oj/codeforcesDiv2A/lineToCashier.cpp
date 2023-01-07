#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int k[n];

    for(int i = 0; i < n; i++){
        cin>>k[i];
    }

    int m[n][100];

    int sum[n];
    for(int i = 0; i < n; i++){
        sum[i] = 0;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < k[i]; j++){
            cin>>m[i][j];
            sum[i] += m[i][j] * 5 + 15;
        }
    }

    int minTime = INT_MAX;

    for(int i = 0; i < n; i++){
        minTime = min(minTime, sum[i]);
    }

    cout<<minTime<<endl;

    return 0;
}