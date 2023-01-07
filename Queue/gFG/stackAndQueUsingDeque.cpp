#include<bits/stdc++.h>

using namespace std;

int main(){
    deque <int> dqStack;

    dqStack.push_back(1);
    dqStack.push_back(2);
    dqStack.push_back(3);
    dqStack.push_back(4);

    for(int i = dqStack.size() - 1; i >= 0; i--)
        cout << dqStack[i] << " ";
        cout << endl;

    for(int i = 0; i < dqStack.size(); i++)
        cout << dqStack[i] << " ";

    return 0;
}