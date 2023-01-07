#include<iostream>

using namespace std;

int tilingWays(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return tilingWays(n - 1) + tilingWays(n - 2);
}

int friendsPairing(int n){
    if(n == 0 || n == 1 || n == 2)
        return n;
    
    return friendsPairing(n - 1) + (n - 1) * friendsPairing(n -2);
}

int main(){
    int n;
    cin>>n;

    // cout<<tilingWays(n);

    cout<<friendsPairing(n);

    return 0;
}