#include<iostream>

typedef long long ll;

using namespace std;

int main(){
    ll n, m;
    cin>>n>>m;

    ll a[n];

    ll noOfOnes = 0, noOfMinusOnes = 0;

    for(ll i = 0; i < n; i++){
        cin>>a[i];
        if(a[i] == 1){
            noOfOnes++;
        }
        if(a[i] == -1){
            noOfMinusOnes++;
        }
    }

    while(m--){
        ll left, right, range;
        cin>>left>>right;

        range = right - (left - 1);

        if(range % 2)
            cout<<0<<endl;
        else{
            if(noOfOnes >= range / 2 && noOfMinusOnes >= range / 2)
                cout<<1<<endl;
            else
                cout<<0<<endl;
        }
    }

    return 0;
}