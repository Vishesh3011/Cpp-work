#include<bits/stdc++.h>

using namespace std;

int main(){
    int count = 1;
    string str;
    getline(cin, str);

    for(int i = 0; i < str.size(); i++){
        if(str[i] == ' '){
            count++;
            i++;
        }
    }

    cout << count;
    
    return 0;
}