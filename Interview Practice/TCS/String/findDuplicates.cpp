#include<bits/stdc++.h>

using namespace std;

void removeDuplicates(string s){
    map <char, int> mp;
    string ans;
    for(int i = 0; i < s.size(); i++)
        mp[s[i]]++;
    for(int i = 0; i < s.size(); i++){
        if(mp[s[i]] != -1){
            ans.push_back(s[i]);
            mp[s[i]] = -1;
        }
    }
    cout << ans;
}

int main(){
    string str;
    getline(cin, str);

    removeDuplicates(str);
    
    return 0;
}