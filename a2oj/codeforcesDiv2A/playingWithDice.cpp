#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    cin>>a>>b;

    int countA = 0, countB = 0, countDraw = 0;

    for(int i = 1; i <= 6; i++){
        if(abs(b - i) > abs(a - i))
            countA++;
        else if(abs(b - i) < abs(a - i))
            countB++;
        else
            countDraw++;
    }

    cout<<countA<<" "<<countDraw<<" "<<countB;

    return 0;
}