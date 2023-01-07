#include<iostream>
#include <bits/stdc++.h>
#include<cstring>

using namespace std;

int main(){
    string s;
    set<char> ch;
    getline(cin, s);

    int count;

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z')
            ch.insert(s[i]);
    }

    cout<<ch.size();

    return 0;
}