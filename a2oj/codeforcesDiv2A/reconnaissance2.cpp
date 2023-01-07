#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];

    for(int i = 0 ; i < n; i++){
        cin>>a[i];
    }

    int minDiff = INT_MAX;

    int pos1, pos2;

    for(int i = 1 ; i < n; i++){
        if(minDiff > abs(a[i] - a[i - 1])){
            minDiff = abs(a[i] - a[i - 1]);
            pos1 = i;
            pos2 = i - 1;
        }
    }

    if(minDiff > abs(a[0] - a[n - 1])){
        pos1 = n - 1;
        pos2 = 0;
    }

    cout<<pos1 + 1<<" "<<pos2 + 1;

    return 0;
}