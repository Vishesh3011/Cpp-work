#include<bits/stdc++.h>

using namespace std;

void findNonRepeat(string s){
    unordered_map <char, int> mp;
    for(int i = 0; i < s.size(); i++)
        mp[s[i]]++;
    for(auto i : mp){
        if(i.second == 1){
            cout << i.first << " ";
        }
    }
}

int main(){
    string str;
    getline(cin, str);

    findNonRepeat(str);
    
    return 0;
}