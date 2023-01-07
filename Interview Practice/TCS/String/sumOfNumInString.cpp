#include<bits/stdc++.h>

using namespace std;

void sumOfNum(string s){
    vector <int> v;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            v.push_back(s[i] - '0');
        }
    }

    int sum = 0;
    for(int i = 0; i < v.size(); i++)
        sum += v[i];
    cout << sum;
}

void consecutiveNums(string s){
    vector <int> v;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            v.push_back(s[i] - '0');
        }
    }

    int sum = 0;
    for(int i = 0; i < v.size(); i++)
        sum += v[i];
    cout << sum;
}

int main(){
    string str;
    getline(cin, str);

    sumOfNum(str);
    
    return 0;
}