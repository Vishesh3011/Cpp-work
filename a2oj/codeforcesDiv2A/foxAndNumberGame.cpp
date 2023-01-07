#include<iostream>
#include<cmath>
#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    if(b==0)
        return a;
    else 
        return gcd(b, a % b);
}

int main(){
    int n;
    cin>>n;

    int a[n];

    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    sort(a, a + n);

    int gs = gcd(a[0], a[1]);
    for(int i = 2; i < n; i++){
        gs = gcd(a[i], gs);
    }

    cout<<gs * n<<endl;
}