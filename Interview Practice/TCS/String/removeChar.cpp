#include<bits/stdc++.h>

using namespace std;

void removeChar(string s1, string s2){
    unordered_map <char, int> mp1, mp2;
    string ans;
    for(int i = 0; i < s1.size(); i++)
        mp1[s1[i]] = 1;
    for(int i = 0; i < s2.size(); i++)
        mp2[s2[i]] = 1;

    for(int i = 0; i < s1.size(); i++){
        if(mp2[s1[i]] != 1)
            ans.push_back(s1[i]);
    }
    cout << ans;
}

int main(){
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    removeChar(str1, str2);
    
    return 0;
}