//doubt
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    if(n == 1){
        cout<<"YES";
        return 0;
    }

    int a[n];

    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    sort(a, a + n);

    int x = a[0], c = 1;
    for(int i = 1; i < n; i++){
        if(a[i] == x){
            c++;
            if(!(c <= (n + 1) / 2)){
                cout<<"NO"<<endl;
                return 0;
            }
        }
        else{
            x = a[i];
            c = 1;
        }
    }
    cout<<"YES";

    return 0;
}