#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1;
    cin>>s1;

    string s2;
    cin>>s2;

    if(s1.size() != s2.size()){
        cout<<"NO"<<endl;
        return 0;
    }

    int a[100005];
    int temp = 0;
    int flag = 0;

    for(int i = 0; i < s1.size(); i++){
        if(s1[i] != s2[i]){
            a[temp] = i;
            temp++;
            flag++;
            if(flag == 3){
                break;
            }
        }
        else
            continue;
    }

    if(flag == 2){
        if(s1[a[0]] == s2[a[1]] && s1[a[1]] == s2[a[0]])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;
}