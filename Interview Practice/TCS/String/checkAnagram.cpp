#include<bits/stdc++.h>

using namespace std;

bool checkAnagram(string s1, string s2){
    map <char, int> mp1, mp2;
    for(int i = 0; i < s1.size(); i++)
        mp1[s1[i]]++;
    for(int i = 0; i < s2.size(); i++)
        mp2[s2[i]]++;
    
    for(auto i : mp1){
        if(mp2[i.first] != i.second)
            return false;
    }
    return true;
}

int main(){
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    if(checkAnagram(str1, str2))
        cout << "It is Anagram.";
    else
        cout << "Not Anagram";
    
    return 0;
}