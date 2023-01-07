#include<iostream>

using namespace std;

void inclusionExclusion(int n, int a, int b){
    int c1 = n / a;
    int c2 = n / b;
    int c3 = n / (a * b);

    cout<<c1 + c2 - c3<<endl;
}

void findGCD(int a, int b){
    while(b != 0){
        int rem = a % b;
        a = b;
        b = rem;
    }

    cout<<a;
}

int main(){
    int n, a, b;

    cin>>n>>a>>b;

    // inclusionExclusion(n, a, b);

    findGCD(a, b);

    return 0;
}