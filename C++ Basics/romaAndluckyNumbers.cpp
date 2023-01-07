#include<iostream>

using namespace std;

int main(){
    int n, k;
    cin>>n>>k;

    int a[n];

    int count = 0;
    int count2 = 0;

    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    int digit;

    for(int i = 0; i < n; i++){
        count = 0;
        while(a[i] > 0){
            digit = a[i] % 10;
            if(digit == 4 || digit == 7){
                count++;
            }
            digit = 0;
            a[i] = a[i] / 10;
        }
        if(count <= k)
            count2++;
    }

    cout<<count2;

    return 0;
}