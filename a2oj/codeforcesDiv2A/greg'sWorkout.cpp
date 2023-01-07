#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];

    int sumChest = 0, sumBiceps = 0, sumBack = 0;

    for(int i = 1; i <= n; i++){
        cin>>a[i];
        if(i % 3 == 1)
            sumChest += a[i];
        if(i % 3 == 2)
            sumBiceps += a[i];
        if(i % 3 == 0)
            sumBack += a[i];
    }

    int maxEle = INT_MIN;
    maxEle = max(sumBack, max(sumChest, sumBiceps));

    if(maxEle == sumBack)
        cout<<"back";
    else if(maxEle == sumChest)
        cout<<"chest";
    else
        cout<<"biceps";

    return 0;
}