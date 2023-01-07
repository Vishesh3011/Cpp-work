#include<bits/stdc++.h>
#include<iostream>

typedef long long ll;

using namespace std;

int main(){
    string s[4];

    ll n = 4; 

    for(int i = 0; i < 4; i++)
        cin>>s[i];

    vector <pair <ll, ll>> a;

    for(int i = 0; i < 4; i++){
        pair <ll, ll> x;
        x = make_pair(s[i].length() - 2, i);
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    bool small = 1, large = 1;

    for(int i = 1; i < n; i++){
        if(!(a[0].first <= a[i].first / 2)){
            small = 0;
            break;
        }
    }

    for(int i = 0; i < n - 1; i++){
        if(!(a[n - 1].first >= a[i].first * 2)){
            large = 0;
            break;
        }
    }

    string options = "ABCD";

    if(small && large){
        cout<<"C"<<endl;
        return 0;
    }
    else if(small){
        cout<<options[a[0].second]<<endl;
        return 0;
    }
    else if(large){
        cout<<options[a[n - 1].second]<<endl;
        return 0;
    }
    else{
        cout<<"C";
        return 0;
    }

    return 0;
}