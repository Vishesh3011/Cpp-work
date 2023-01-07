#include<iostream>

using namespace std;

int catalanNumbers(int n){
    if(n <= 1)
        return 1;

    int res = 0;
    for(int i = 0; i < n; i++){
        res += catalanNumbers(i) * catalanNumbers(n - i - 1);
    }
    return res;
}

int main(){
    for(int i = 0; i < 10; i++){
        cout<<catalanNumbers(i)<<" ";
    }

    return 0;
}