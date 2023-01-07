#include<iostream>
#include<bits/stdc++.h>

using namespace std;

#define N 1e9

int main(){
    int n;
    cin>>n;

    int min = -2 * N, max = 2 * N;

    for(int i = 0; i < n; i++){
        string s;
        int num;
        char ch;

        cin>>s>>num>>ch;

        if((s == ">" && ch == 'Y') || (s == "<=") && ch == 'N'){
            if(min <= num)
                min = num + 1;
        }

        if((s == ">=" && ch == 'Y') || (s == "<") && ch == 'N'){
            if(min < num)
                min = num;
        }

        if((s == "<" && ch == 'Y') || (s == ">=") && ch == 'N'){
            if(max >= num)
                max = num - 1;
        }

        if((s == "<=" && ch == 'Y') || (s == ">") && ch == 'N'){
            if(max > num)
                max = num;
        }
    }

    if(max < min)
        cout<<"Impossible";
    else
        cout<<min;

    return 0;
}