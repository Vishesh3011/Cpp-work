#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdin);

    int n;
    cin>>n;

    string s;

    for(int i = 0; i < n; i++){
        cin>>s[i];
    }

    int pos = n / 2;

    for(int i = 1; i <= pos; i++){
        if(s[i] == 'L')
            cout<<i<<" "<<i + pos<<endl;
        else
            cout<<i + pos<<" "<<i<<endl;
    }

    return 0;
}