#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdin);
    
    // int n;
    // cin>>n;

    // int a[3][2];

    // int cup[3] = {1, 2, 3};

    // for(int i = 0; i < 3; i++){
    //     cin>>a[i][0]>>a[i][1];
    //     swap(cup[a[i][0] - 1], cup[a[i][1] - 1]);
    // }

    // for(int i = 0; i < 3; i++){
    //     if(cup[i] == n){
    //         cout<<i + 1;
    //     }
    // }

    // return 0;

    int ball;
    cin>>ball;

    int a, b;

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdin);

    for(int i = 0; i < 3; i++){
        cin>>a>>b;
        if(a == ball)
            ball = b;
        else if(b == ball)
            ball = a;
    }

    cout<<ball;

    return 0;
}