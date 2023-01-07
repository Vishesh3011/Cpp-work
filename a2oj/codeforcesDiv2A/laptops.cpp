#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    // int a[n][2];

    // for(int i = 0; i < n; i++){
    //     cin>>a[i][0]>>a[i][1];
    // }

    // for(int i = 0; i < n; i++){
    //     if(a[n - 1][0] - a[n - 1][1] == 0 && a[n][0] - a[n][1] == 0){
    //         cout<<"Poor Alex";
    //         return 0;
    //     }
    //     if(a[i][1] > a[i + 1][1] && a[i][0] < a[i + 1][0]){
    //         cout<<"Happy Alex";
    //         return 0;
    //     }
    // }

    // cout<<"Poor Alex";

    int a, b;
    for(int i = 0; i < n; i++){
        cin>>a>>b;
        if(a != b){
            cout<<"Happy Alex";
            return 0;
        }
    }

    cout<<"Poor Alex";
    return 0;
}

