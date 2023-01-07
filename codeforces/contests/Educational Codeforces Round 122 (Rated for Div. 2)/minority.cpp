#include<iostream>
#include<bits/stdc++.h>

typedef long long int ll;

using namespace std;

void sol(){
    string s;
    cin>>s;

    ll count = 0;

    ll len = s.size();

    for(int i = 0; i < len; i++){
        if(s[i] == '1')
            count++;
    }

    if(count == len - count){
        cout<<count - 1<<endl;
    }
    else{
        cout<<min(count, len - count)<<endl;
    }
}

int main(){
    int t;

    cin>>t;
    
    while(t--)
        sol();

    return 0;
}
