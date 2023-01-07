#include<iostream>

using namespace std;

void reverseString(string s, int i, int n){
    if(i == n)
        return;
    reverseString(s, i + 1, n);
    
    cout<<s[i];
}

void replacePi(string s){
    if(s.size() == 0)
        return;

    if(s[0] == 'p' && s[1] == 'i'){
        cout<<"3.14";
        return replacePi(s.substr(2));
    }
    else{
        cout<<s[0];
        return replacePi(s.substr(1));
    }
}

string removeDuplicates(string s){
    if(s.size() == 0)
        return "";
    char ch = s[0];
    string prevCond = removeDuplicates(s.substr(1));
    if(ch == prevCond[0]){
        return prevCond;
    }
    return ch + prevCond;
}

string moveCharToTheEnd(string s){
    if(s.size() == 0)
        return "";
    
    char ch = s[0];

    string prevCond = moveCharToTheEnd(s.substr(1));

    if(ch == 'x'){
        return prevCond + ch;
    }
    return ch + prevCond;
}

void findSubstrings(string s, string ans){
    if(s.size() == 0){
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);

    findSubstrings(ros, ans);
    findSubstrings(ros, ans + ch);
    
}

void findSubstringsWithASCII(string s, string ans){
    if(s.size() == 0){
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);
    int code = ch;

    findSubstringsWithASCII(ros, ans);
    findSubstringsWithASCII(ros, ans + ch);
    findSubstringsWithASCII(ros, ans + to_string(code));
}

string keypadArr[] = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypadCombinations(string s, string ans){
    if(s.size() == 0){
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string code = keypadArr[ch - '0'];
    string ros = s.substr(1);

    for(int i = 0; i < code.length(); i++){
        keypadCombinations(ros, ans + code[i]);
    }
}

int main(){
    string s;
    cin>>s;

    // reverseString(s, 0, s.size());
    
    // replacePi(s);

    // cout<<removeDuplicates(s);

    // cout<<moveCharToTheEnd(s);

    // findSubstrings(s, "");

    // findSubstringsWithASCII(s, "");

    keypadCombinations("23", "");

    return 0;
}