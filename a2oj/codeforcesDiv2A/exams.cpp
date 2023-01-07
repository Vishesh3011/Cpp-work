#include<iostream>

using namespace std;

int main(){
    int n, k;
    cin>>n>>k;

    if(k / n >= 3)
        {cout<<0;
        return 0;}

    int x = k % n;

    cout<<n - x;

    return 0;
}