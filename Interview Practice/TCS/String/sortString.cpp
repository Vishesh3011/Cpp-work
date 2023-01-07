#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    getline(cin, str);

    for(int i = 0; i < str.size(); i++){
        for(int j = 0; j < i + 1; j++){
            if(str[i] < str[j])
                swap(str[i], str[j]);
        }
    }

    cout << str;
    
    return 0;
}