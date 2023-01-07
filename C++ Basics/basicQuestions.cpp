#include<iostream>
#include<cmath>

using namespace std;

int main(){
    //prime
    
    // int n;
    // cin>>n;
    // bool flag = 0;

    // for(int i = 2; i <= sqrt(n); i++){
    //     if(n % i == 0){
    //         flag = 0;
    //         break;
    //     }
    //     else
    //         flag = 1;
    // }

    // if(flag = 1)
    //     cout<<"Prime Number";
    // else
    //     cout<<"Not a prime number";

    //reverse a number

    // int n;
    // cin>>n;
    // int reverse = 0, lastDigit;
    // while(n > 0){
    //     lastDigit = n % 10;
    //     reverse = reverse * 10 + lastDigit;
    //     n = n / 10;
    // }

    // cout<<reverse;

    int n, digit, sum = 0, number;
    cin>>number;

    n = number;

    while(n > 0){
        digit = n % 10;
        sum += pow(digit, 3);
        n = n / 10;
    }

    if(sum == number)
        cout<<number<<" is an armstrong number";
    else
        cout<<"Not an armstrong number";


    return 0;
}