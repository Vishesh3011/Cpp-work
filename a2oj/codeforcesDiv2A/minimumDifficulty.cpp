#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int array[n];

    for(int i = 0; i < n; i++){
        cin>>array[i];
    }

    int minEle = INT_MAX;

    for(int i = 1; i < n - 1; i++){
        int maxEle = INT_MIN;
        for(int j = 0; j < n - 1; j++){
            int d = 0;
            if(j == i)
                d = array[j + 1] - array[j - 1];
            else
                d = array[j + 1] - array[j];
            maxEle = max(d, maxEle);
        }
        minEle = min(minEle, maxEle);
    }

    cout<<minEle;

    return 0;
}