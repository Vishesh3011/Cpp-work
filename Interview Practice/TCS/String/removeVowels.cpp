#include<bits/stdc++.h>

using namespace std;

void removeVowels(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'|| s[i] == 'u'){
            s = s.substr(0, i) + s.substr(i + 1);
            i--;
        }
    }
    cout << s;
}

int main(){
    string str;
    getline(cin, str);

    removeVowels(str);
    
    return 0;
}