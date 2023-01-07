#include<iostream>

using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;

    int maxEle = INT_MIN;

    maxEle = max(a * (b + c), max(a + b + c, max(a * b * c, (a + b)* c)));

    cout<<maxEle;

    return 0;
}