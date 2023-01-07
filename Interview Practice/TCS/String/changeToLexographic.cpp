#include<bits/stdc++.h>

using namespace std;

void changeToLexo(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'z')
            s[i] = s[i] - 26;
        s[i] = s[i] + 1;
    }
    cout << s;
}

int main(){
    string str;
    getline(cin, str);

    changeToLexo(str);
    
    return 0;
}