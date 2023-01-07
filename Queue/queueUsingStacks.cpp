#include<bits/stdc++.h>

using namespace std;

class que{
    stack <int> s1;
    stack <int> s2;
    public:
        void push(int x){
            s1.push(x);
        }

        int pop(){
            if(s1.empty() && s2.empty()){
                cout<<"Queue underflow."<<endl;
                return -1;
            }
            if(s2.empty()){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();                
                }
            }
            int topVal = s2.top();
            s2.pop();
            return topVal;
        }

        bool empty(){
            if(s1.empty() && s2.empty()){
                return true;
            }
            return false;
        }
};

class que2{
    stack <int> s;
    public:
        void push(int x){
            s.push(x);
        }

        int pop(){
            if(s.empty()){
                cout<<"Queue underflow."<<endl;
                return -1;
            }
            int x = s.top();
            s.pop();
            if(s.empty())
                return x;
            int item = pop();
            s.push(x);
            return item;
        }
};

int main(){
    // que q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // cout<<q.pop()<<endl;
    // cout<<q.pop()<<endl;
    // cout<<q.pop()<<endl;
    // cout<<q.pop()<<endl;
    // cout<<q.pop()<<endl;
    // cout<<q.empty()<<endl;

    que2 q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;

    return 0;
}