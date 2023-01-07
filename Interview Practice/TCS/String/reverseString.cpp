#include<bits/stdc++.h>

using namespace std;

void reverseString(string s){
    int left = 0, right = s.size() - 1;
    while(left < right){
        swap(s[left], s[right]);
        left++;
        right--;
    }
    cout << s;
}

int main(){
    string str;
    getline(cin, str);

    reverseString(str);
    
    return 0;
}