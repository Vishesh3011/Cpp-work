#include<iostream>

using namespace std;

int main(){
    int n, m;

    cin>>n>>m;

    if(m > n){
        cout<<-1;
        return 0;
    }
    
    int steps;

    steps = n / 2 + n % 2;

    while(steps % m != 0){
        steps++;
    }

    cout<<steps;

    return 0;
}