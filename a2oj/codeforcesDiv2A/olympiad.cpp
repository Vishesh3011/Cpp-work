#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int array[n];

    for(int i = 1; i <= n; i++)
        cin>>array[i];

    stack <int> s1;
    stack <int> s2;
    stack <int> s3;

    for(int i = 1; i <=n; i++){
        if(array[i] == 1)
            s1.push(i);
        else if(array[i] == 2)
            s2.push(i);
        else
            s3.push(i);
    }

    int minTeam = min(s1.size(), min(s2.size(), s3.size()));

    if(minTeam == 0)
        cout<<0;
    else{
        cout<<minTeam<<endl;
        while(!s1.empty() && !s2.empty() && !s3.empty()){
            cout<<s1.top()<<" ";
            s1.pop();
            cout<<s2.top()<<" ";
            s2.pop();
            cout<<s3.top()<<endl;
            s3.pop();
        }
    }

    return 0;
}