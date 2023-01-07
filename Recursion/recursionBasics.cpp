#include<iostream>

using namespace std;

int sum(int n){
    if(n == 0)
        return 0;
    int prevSum = sum(n - 1);

    return n + prevSum;
}

int power(int n, int p){
    if(p == 0)
        return 1;

    int prevTerm = power(n, p - 1);

    return n * prevTerm;
}

int factorial(int n){
    if(n == 0)
        return 1;
    
    int prevFact = factorial(n - 1);

    return prevFact * n;
}

int fib(int n){
    if(n == 0 || n == 1)
        return n;
    
    return fib(n - 1) + fib(n - 2);
}

int main(){
    int n;
    cin>>n;

    // cout<<sum(n);
    
    // int p;
    // cin>>p;

    // cout<<power(n , p);

    // cout<<factorial(n);

    cout<<fib(n);

    return 0;
}