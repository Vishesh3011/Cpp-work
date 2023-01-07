#include<bits/stdc++.h>

using namespace std;

int main(){
    int flag = -1;
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    for(int i = 0; i < str1.size(); i++){
        if(str1.substr(i, str1.size() - 1) == str2){
            flag = i;
            break;
        }
    }
    
    cout << flag;

    return 0;
}