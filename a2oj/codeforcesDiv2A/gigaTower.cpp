#include<iostream>

typedef long long int ll;

using namespace std;

bool checkFor8(int n){
    ll temp = n;
    while(temp != 0){
        int digit = temp % 10;
        if(digit == 8)
            return 1;
        temp = temp / 10;
    }
    return 0;
}

int main(){
    ll a, b;
    cin>>a;

    ll i = 1;

    b = a;

    while(1){
        b++;
        if(checkFor8(abs(b))){
            cout<<i<<endl;
            return 0;
        }
        i++;
    }
    
    return 0;
}