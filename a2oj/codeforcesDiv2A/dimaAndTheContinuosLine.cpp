#include<iostream>

typedef long long ll;

using namespace std;

int main(){
    ll n;
    ll a = 0, b = 0;
    cin>>n;

    ll x[n];

    for(int i = 0; i < n; i++){
        cin>>x[i];
    }

    for(int i = 0; i < n; i++){
        a = b = 0;
        for(int j = i + 2; j < n; j++){
            if((x[j] > x[i] && x[j] > x[i + 1]) || (x[j] < x[i] && x[j] < x[i + 1]))
                a++;
            else
                b++;
        }
        
        if(a && b){
            cout<<"yes";
            return 0;
        }
    }
    
    cout<<"no";

    return 0;
}