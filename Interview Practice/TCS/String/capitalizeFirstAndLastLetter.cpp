#include<bits/stdc++.h>

using namespace std;

void capitalizeString(string s){
    for(int i = 0; i < s.size(); i++){
        if(i == 0 || i == s.size() - 1)
            s[i] = toupper(s[i]);
        else if(s[i] == ' '){
            s[i - 1] = toupper(s[i - 1]);
            s[i + 1] = toupper(s[i + 1]);
        }
    }
    cout << s;
}

int main(){
    string str;
    getline(cin, str);

    capitalizeString(str);
    
    return 0;
}