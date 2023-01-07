#include<iostream>

using namespace std;

int main(){
    int y, k, n;
    cin>>y>>k>>n;

    // if(y >= n){
    //     cout<<-1;
    //     return 0;
    // }

    // int i = 1;

    // while(i < n){
    //     if((y + i) % k == 0 && (y + i) <= n){
    //         cout<<i<<" ";
    //     }
    //     i++;
    // }

    int x = k - y % k;
    int top = n - y;
    if(x <= top){
        while(x <= top){
            cout<<x<<" ";
            x += k;
        }
    }
    else
        cout<<-1;
    return 0;
}