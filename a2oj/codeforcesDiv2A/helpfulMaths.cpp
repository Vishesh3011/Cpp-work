#include<iostream>
#include<string>
#include<cstring>

using namespace std;

#define sz(x) ((int)(x).size())

void sol(){
    string word;
    cin>>word;

    int counter[4]={0,0,0,0};

    int n = sz(word);
    
    for(int i = 0; i < n; i++){
        if(word[i] >= '1' && word[i] <= '3'){
            counter[word[i]-'0']++;
        }
    }
    string s =""; 
    for(int i = 1; i < 4; i++){
        while(counter[i]--){
            s.push_back('0'+ i);
            s.push_back('+');
        }
    }
    s.pop_back();
    cout<<s<<endl;

    
}

int main(){
    // int t;
    // cin>>t;
    
    // while(t--)
        sol();

    return 0;
}