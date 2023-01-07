#include<bits/stdc++.h>

using namespace std;

int main(){
    set <int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(4);

    for(auto i : s){
        cout<<i<<" ";
    }
    cout<<endl;

    s.erase(3);

    cout<<s.size()<<endl;

    for(auto i : s){
        cout<<i<<" ";
    }
    cout<<endl;

    multiset <int> mS;

    mS.insert(1);
    mS.insert(2);
    mS.insert(3);
    mS.insert(3);
    mS.insert(3);
    mS.insert(3);
    mS.insert(3);
    mS.insert(3);
    mS.insert(4);

    for(auto i : mS){
        cout<<i<<" ";
    }
    cout<<endl;

    mS.erase(mS.find(3));

    for(auto i : mS){
        cout<<i<<" ";
    }
    cout<<endl;

    mS.erase(3);

    cout<<mS.size()<<endl;

    for(auto i : mS){
        cout<<i<<" ";
    }

    cout<<endl;

    unordered_set <int> uS;

    uS.insert(1);
    uS.insert(2);
    uS.insert(3);

    for(auto i : uS)
        cout<<i<<" ";
    cout<<endl;

    for(auto i : uS)
        cout<<i<<" ";

    return 0;
}