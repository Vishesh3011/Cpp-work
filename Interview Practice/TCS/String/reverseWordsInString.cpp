#include<bits/stdc++.h>

using namespace std;

void reverseWordsInString(string s){
    stack <string> st;
    for(int i = 0; i < s.size(); i++){
        string temp ="";
        while(s[i] != ' '){
            temp.push_back(s[i]);
            i++;
        }
        st.push(temp);
    }
    
    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }
}

int main(){
    string str;
    getline(cin, str);

    reverseWordsInString(str);
    
    return 0;
}