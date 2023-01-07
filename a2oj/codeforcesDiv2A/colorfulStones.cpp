#include<iostream>

using namespace std;

int main(){
    string s;
    cin>>s;

    string t;
    cin>>t;


    int j = 0;

    for(int i = 0; i <= t.size(); i++){
        if(t[i] == s[j])
            j++;
    }

    cout<<j + 1<<endl;

    return 0;
}