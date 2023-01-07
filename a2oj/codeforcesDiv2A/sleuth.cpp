#include<iostream>

using namespace std;

int main(){
    string s;
    getline(cin, s);

    int flag = 0;

    for(int i = s.size() - 1; i >= 0; i--){
        if(s[i] == '?' || s[i] == ' ')
            continue;
        
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y'){
            flag = 1;
            break;
        }
        else{
            break;
        }
    }

    if(flag == 1)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}