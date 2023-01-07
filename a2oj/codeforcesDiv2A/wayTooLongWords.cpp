#include<iostream>
#include<string>

using namespace std;

#define sz(x) ((int)(x).size())

void sol(){
    string word;
    cin>>word;
    int n = sz(word);

    if(word.length() > 10)
        cout<<word[0]<<word.length() - 2<<word[n - 1]<<endl;
    else
        cout<<word<<endl;
}

int main(){
    int t;
    cin>>t;
    
    while(t--)
        sol();

    return 0;
}