#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    // string s;
    // cin>>s;

    // int nineteen[4];
    // for(int i = 0; i < 4; i++)
    //     nineteen[i] == 0;

    // for(int i = 0; i < s.size(); i++){
    //     if(s[i] == 'n')
    //         nineteen[0]++;
    //     if(s[i] == 'i')
    //         nineteen[1]++;
    //     if(s[i] == 'e')
    //         nineteen[2]++;
    //     if(s[i] == 't')
    //         nineteen[3]++;
    // }

    // int x = INT_MAX;

    // x = min(nineteen[0], min(nineteen[1], min(nineteen[2], min(x, nineteen[3]))));

    // cout<<x;

    char s[105];

    int n = 0, i = 0, e = 0, t = 0;

    cin>>s;

    for(int j = 0; j < strlen(s); j++){
        if(s[j] == 'n')
            n++;

        if(s[j] == 'i')
            i++;

        if(s[j] == 'e')
            e++;
        
        if(s[j] == 't')
            t++;
    }

    int x = INT_MAX;

    n = (n - 1) / 2;

    e = e / 3;

    if(x > n){
        x = n;
    }

    if(x > i){
        x = i;
    }

    if(x > e){
        x = e;
    }

    if(x > t){
        x = t;
    }

    cout<<x;

    return 0;
}