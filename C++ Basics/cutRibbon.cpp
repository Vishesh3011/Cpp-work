#include<iostream>

using namespace std;

int main(){
    int n, a, b, c;
    cin>>n>>a>>b>>c;

    int maxEle = INT_MIN;

    maxEle = max(n - a, max(n - b, n - c));

    cout<<n - maxEle;

    return 0;
}