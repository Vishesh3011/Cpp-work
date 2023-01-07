#include<bits/stdc++.h>

using namespace std;

void findTheLargestWord(string s){
    int maxWord = INT_MIN;
    vector <string> v;
    for(int i = 0; i < s.size(); i++){
        string str = "";
        while(s[i] != ' '){
            s.push_back(s[i]);
            i++;
        }
        v.push_back(str);
    }
    string highestWord = "";

    int maxSize = INT_MIN;
    for(auto i : v){
        int size = i.size();
        maxSize = max(size, maxSize);
        highestWord = i;
    }
}

int main(){
    string s;
    getline(cin, s);


    findTheLargestWord(s);
    return 0;
}