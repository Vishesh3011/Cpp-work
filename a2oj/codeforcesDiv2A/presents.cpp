#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int array[n + 1];

    for(int i = 1; i <= n; i++){
        int gR;
        cin>>gR;
        array[gR] = i;
    }

    for(int i = 1; i <= n; i++)
        cout<<array[i]<<" ";

    return 0;
}