#include<iostream>

using namespace std;

#define n 100

class stack{
    int * arr;
    int top;

    public:
        stack(){
            arr = new int[n];
            top = -1;
        }

        void push(int x){
            if(top == n - 1){
                cout<<"Stack Overflow!"<<endl;
                return; 
            }
            top++;
            arr[top] = x;
        }

        void pop(){
            if(top == -1){
                cout<<"No elements to pop!"<<endl;
                return;
            }

            top--;
        }

        void Top(){
            if(top == -1){
                cout<<"No elements in stack!"<<endl;
                return;
            }

            cout<<arr[top]<<endl;
        }

        bool empty(){
            return top == -1;
        }
};

int main(){
    stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.Top();
    s.pop();
    s.Top();
    s.pop();
    s.pop();
    s.pop();
    cout<<s.empty()<<endl;

    return 0;
}