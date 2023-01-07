#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector <int> positive, negative, zero;

    int x;
    for(int i = 0; i < n; i++){
        cin>>x;
        if(x < 0)
            negative.push_back(x);
        else if(x == 0)
            zero.push_back(x);
        else
            positive.push_back(x);
    }

    if(positive.size() == 0){
        int u = 2;
        while(u--){
            positive.push_back(negative[negative.size() - 1]);
            negative.pop_back();
        }
    }

    if(negative.size() % 2 == 0){
        zero.push_back(negative[negative.size() - 1]);
        negative.pop_back();
    }

    cout<<negative.size()<<" ";
    for(int i = 0; i < negative.size(); i++)
        cout<<negative[i]<<" ";
    cout<<endl;

    cout<<positive.size()<<" ";
    for(int i = 0; i < positive.size(); i++)
        cout<<positive[i]<<" ";
    cout<<endl;

    cout<<zero.size()<<" ";
    for(int i = 0; i < zero.size(); i++)
        cout<<zero[i]<<" ";
    cout<<endl;

    return 0;
}