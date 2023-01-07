#include<bits/stdc++.h>

using namespace std;

void removeSpaces(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            s = s.substr(0, i) + s.substr(i + 1);
            i--;
        }
    }
    cout << s;
}

int main(){
    string str;
    getline(cin, str);

    removeSpaces(str);
    
    return 0;
}