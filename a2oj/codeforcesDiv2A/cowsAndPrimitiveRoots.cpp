#include<iostream>
#include<bits/stdc++.h>

typedef long long int ll;

using namespace std;

int main(){
    int p;
    cin>>p;

    int count = 1;
    for(int i = 2; i < p - 1; i++){
        if(__gcd(i, p - 1) == 1)
            count++;
    }

    cout<<count;

    return 0;
}
