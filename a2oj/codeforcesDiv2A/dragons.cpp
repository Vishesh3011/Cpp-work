#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, s;

    cin>>s>>n;

    array<int, 2> a[n];

    for(int i = 0; i < n; i++){
        cin>>a[i][0]>>a[i][1];
    }

    sort(a, a + n);

    int flag = 1;

    for(int i = 0; i < n; i++){
        if(a[i][0] < s){
            s += a[i][1];
        }
        else{
            flag = 0;
            break;
        }
    }

    if(flag == 0)
        cout<<"NO";
    else
        cout<<"YES";

    return 0;
}