#include<iostream>

using namespace std;

int main(){
    int n, k;
    cin>>n>>k;

    int array[n][2];

    int joy;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin>>array[i][j];
        }
    }

    int a[n];

    for(int i = 0; i < n; i++){
        int fi = array[i][0];
        int ti = array[i][1];
        if(ti < k)
            a[i] = fi;
        else
            a[i] = fi - ti + k;
    }

    int maxEle = INT_MIN;

    for(int i = 0; i < n; i++){
        if(a[i] > maxEle)
            maxEle = a[i];
    }

    cout<<maxEle;

    return 0;
}