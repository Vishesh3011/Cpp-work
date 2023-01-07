#include<bits/stdc++.h>

using namespace std;

class Stack1{
    int n;
    queue <int> q1;
    queue <int> q2;

    public:
        Stack1(){
            n = 0;
        }

        void push(int x){
            q2.push(x);
            n++;
            while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }
            swap(q1, q2);
        }

        void pop(){
            q1.pop();
            n--;
        }

        int top(){
            return q1.front();
        }

        int size(){
            return n;
        }
};

class Stack2{
    int n;
    queue <int> q1;
    queue <int> q2;

    public:
        Stack2(){
            n = 0;
        }

        void push(int x){
            q1.push(x);
            n++;
        }

        void pop(){
            if(q1.empty()){
                return;
            }

            while(q1.size() != 1){
                q2.push(q1.front());
                q1.pop();
            }

            q1.pop();
            n--;
            swap(q1, q2);
        }

        int top(){
            if(q1.empty())
                return -1;

            while(q1.size() != 1){
                q2.push(q1.front());
                q1.pop();
            }

            int ans = q1.front();
            q2.push(q1.front());
            swap(q1, q2);
            return ans;
        }

        int size(){
            return n;
        }
};



int main(){
    // Stack1 s;
    Stack2 s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.size()<<endl;

    return 0;
}