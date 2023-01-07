#include<bits/stdc++.h>

using namespace std;

void countFreq(string s){
    map <char, int> mp;
    for(int i = 0; i < s.size(); i++)
        mp[s[i]]++;
    for(auto i : mp){
        cout << i.first << i.second << endl;
    }
}

int main(){
    string str;
    getline(cin, str);

    countFreq(str);
    
    return 0;
}