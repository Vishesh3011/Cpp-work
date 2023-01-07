#include<iostream>
#include<bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main(){
    ll n, v;
    cin>>n>>v;

    queue<ll> q;

    for(ll i = 1; i <= n; i++){
        ll p;
        cin>>p;
        ll array[p];
        for(int j = 0; j < p; j++){
            cin>>array[j];
        }
        for(int j = 0; j < p; j++){
            if(array[j] < v){
                q.push(i);
                break;
            }
        }
    }

    cout<<q.size()<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}