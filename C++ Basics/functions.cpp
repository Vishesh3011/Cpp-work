#include<iostream>
#include<cmath>

using namespace std;

// void print(int n){
//     cout<<n<<endl;
//     return;
// }

// int add(int num1, int num2){
//     print(num1);
//     print(num2);
//     return num1 + num2;
// }

// bool isPrime(int n){
//     for(int i = 2; i <= sqrt(n); i++){
//         if(n%i == 0)
//             return false;
//     }
//     return true;
// }

// void fib(int num){
//     int num1 = 0, num2 = 1, num3;
//     cout<<num1<<", "<<num2;
//     for(int i = 1; i <= num; i++){
//         num3 = num1 + num2;
//         cout<<", "<<num3;
//         num1++;
//         num2++;
//     }
// }

int fact(int num){
    int factorial = 1;
    for(int i = 2; i <= num; i++){
        factorial = factorial * i;
    }
    return factorial;
}

float nCr(int n, int r){
    int a, b, c, d;
    d = n - r;
    a = fact(n);
    b = fact(r);  
    c = fact(d);
    return a/(b * c) ;
}

int main(){
    int n, r;
    // cin>>a>>b;
    cin>>n;
    //  cout<<add(a, b);

    // for(int i = a; i <= b; i++){
    //     if(isPrime(i) == true)
    //         cout<<i<<endl;
    // }


    // fib(n);

    for(int i = 0; i <= n - 1; i++){
        for(int j = 0; j <= i; j++){
            cout<<nCr(i, j)<<" ";
        }
        cout<<endl;
    }
    return 0;
 }