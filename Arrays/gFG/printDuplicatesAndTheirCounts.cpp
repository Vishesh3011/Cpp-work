#include<bits/stdc++.h>

using namespace std;

void printDuplicatesAndTheirCounts(string s){
    unordered_map <char, int> um;
    for(int i = 0; i < s.size(); i++)
        um[s[i]]++;
    for(auto i : um){
        if(i.second > 1){
            cout<<i.first<<" "<<i.second;
        }
        cout<<endl;
    }
}

int main(){
    string s;
    getline(cin, s);
    printDuplicatesAndTheirCounts(s);
    return 0;
}