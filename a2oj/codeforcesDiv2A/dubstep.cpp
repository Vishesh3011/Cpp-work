#include<iostream>

using namespace std;

int main(){
    string s;
    cin>>s;

    int skip = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B'){
            if(skip)
                cout<<" ";
            i = i + 2;
            skip = 0;
        }
        else{
            cout<<s[i];
            skip = 1;
        }
    }
    return 0;
}