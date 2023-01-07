#include<iostream>
#include<string>
#include<cstring>

using namespace std;

#define sz(x) ((int)(x).size())

void sol(){
    string word;
    cin>>word;

    int n = sz(word);
    
    for(int i = 0; i < n; i++){
        word[i] = tolower(word[i]);
        if(!(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] =='y')){
            cout<<"."<<word[i];
        }
    }
}

int main(){
    // int t;
    // cin>>t;
    
    // while(t--)
        sol();

    return 0;
}