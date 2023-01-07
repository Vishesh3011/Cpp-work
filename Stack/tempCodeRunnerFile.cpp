#include<bits/stdc++.h>

using namespace std;

int findPrecedence(char ch){
    if(ch == '^')
        return 3;
    else if(ch == '*' || ch == '/')
        return 2;
    else if(ch == '+' || ch == '-')
        return 1;
    else
        return -1;
}

string infixToPrefix(string s){
    stack <char> st;
    string res;

    reverse(s.begin(), s.end());

    for(int i = 0; i < s.size(); i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            res += s[i];
        else if(s[i] == ')')
            st.push(s[i]);
        else if(s[i] == '('){
            while(!st.empty() && st.top() != ')'){
                res += st.top();
                st.pop();
            }
            if(!st.empty())
                st.pop();
        }
        else{
            while(!st.empty() && findPrecedence(st.top()) >= findPrecedence(s[i])){
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    
    while(!st.empty()){
        res += st.top();
        st.pop();
    }
    
    reverse(res.begin(), res.end());

    return res;
}

int main(){
    string s;
    //(a-b/c)*(a/k-l)
    cin>>s;

    cout<<infixToPrefix(s);

    return 0;
}