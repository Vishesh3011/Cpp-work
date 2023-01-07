#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back('a');

    for(int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;

    vector <int> :: iterator it;

    for(it = v.begin(); it != v.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

    for(auto element : v)
        cout<<element<<" ";
    cout<<endl;

    vector <int> v2 (3, 0);

    swap(v, v2);

    for(auto element : v)
        cout<<element<<" ";
    cout<<endl;

    for(auto element : v2)
        cout<<element<<" ";
    cout<<endl;

    pair <int, char> p;

    p.first = 6;
    p.second = 'f';

    cout<<p.first<<p.second;

    return 0;
}