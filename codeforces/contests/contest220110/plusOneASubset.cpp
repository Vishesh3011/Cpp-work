#include<iostream>

using namespace std;

void sol(){
    int n;
    cin>>n;

    int maxNum = INT_MIN;
    int minNum = INT_MAX;
    int operations;

    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
        maxNum = max(maxNum, a[i]);
        minNum = min(minNum, a[i]);
    }

    cout<<maxNum - minNum<<endl;
}

int main(){
    int t;
    cin>>t;

    while(t--)
        sol();

    return 0;
}