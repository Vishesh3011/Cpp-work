#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int noOfToastFromDrink = k * l / nl;
    int noOfToastFromLime = c * d;
    int noOfToastFromSalt = p / np;

    cout<<min(noOfToastFromDrink, min(noOfToastFromLime, noOfToastFromSalt)) / n;

    return 0;
}