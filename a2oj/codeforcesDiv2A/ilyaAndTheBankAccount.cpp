#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int maxNum = INT_MIN;

    if(n < 0){
        int num1, num2;
        num1 = n / 10;

        int temp1, temp2;
        temp1 = n % 10;
        n = n / 10;
        temp2 = n % 10;
        num2 = n - temp2 + temp1;
        maxNum = max(num1, num2);
    }
    else
        maxNum = n;

    cout<<maxNum;

    return 0;
}