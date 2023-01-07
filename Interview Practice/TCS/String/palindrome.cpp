#include<bits/stdc++.h>

using namespace std;

bool checkPalindrome(string s){
    int left = 0, right = s.size() - 1;
    while(left < right){
        if(s[left] != s[right])
            return false;
        left++;
        right--;
    }
    return true;
}

int main(){
    string str;
    getline(cin, str);

    if(checkPalindrome(str))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    
    return 0;
}