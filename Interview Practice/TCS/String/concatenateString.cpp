#include<bits/stdc++.h>

using namespace std;

int main(){
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    str1.append(str2);

    cout << str1;
    
    return 0;
}