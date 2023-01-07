#include<iostream>

using namespace std;

void primeSeive(int n){
    // int array[100] = {0};

    // for(int i = 2; i <= n; i++){
    //     if(array[i] == 0){
    //         for(int j = i * i; j <= n; j = j + i)
    //             array[j] = 1;
    //     }
    // }

    // for(int i = 2; i <= n; i++){
    //     if(array[i] == 0)
    //         cout<<i<<" ";
    // }

    //smallest prime factor
    int spf[100] = {0};

    for(int i = 2; i <= n; i++){
        spf[i] = i;
    }

    for(int i = 2; i <= n; i++){
        if(spf[i] == i){
            for(int j = i * i; j <= n; j = j + i){
                if(spf[j] == j){
                    spf[j] = i;
                }
            }
        }
    }

    while(n != 1){
        cout<<spf[n]<<" ";
        n = n / spf[n];
    }
}

int main(){
    int n;
    cin>>n;

    primeSeive(n);

    return 0;
}