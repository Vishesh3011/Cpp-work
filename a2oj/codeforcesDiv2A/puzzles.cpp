#include<iostream>
#include <bits/stdc++.h>
#include<cmath>

using namespace std;

int main(){
    int n , p;
    cin>>n>>p;

    int a[p];

    for(int i = 0; i < p; i++)
        cin >> a[i];

    int minDiff = INT_MAX;

    sort(a, a + n);

    for(int i = 1; i < n; i++){
        minDiff = min(minDiff, abs(a[i - 1] - a[i]));
    }

    cout<<minDiff;
    return 0;
}