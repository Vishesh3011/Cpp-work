#include<bits/stdc++.h>
#include<cstring>

using namespace std;

void sol(){
    int n, k;
    cin>>n>>k;

    string s;
    cin>>s;

    if(k == 0){
        cout<<1<<endl;;
        return;
    }

    string str = s;

    reverse(str.begin(), str.end());

    if(s == str){
        cout<<1<<endl;
        return;
    }

    cout<<2<<endl;;
}

int main(){
    int t;
    cin>>t;

    while(t--)
        sol();
    
    return 0;
}