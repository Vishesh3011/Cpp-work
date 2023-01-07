#include<bits/stdc++.h>

using namespace std;

#define n 100

class twoStack{
    int * arr;
    int top1, top2;

    public:
        twoStack(){
            arr = new int[n];
            top1 = -1;
            top2 = n / 2;
        }

        void push1(int x){
            if(top1 == (n / 2) - 1){
                cout << "Stack is full!" ;
                return;
            }
            top1++;
            arr[top1] = x;
        }

        void push2(int x){
            if(top2 == n - 1){
                cout << "Stack is full!" ;
                return;
            }
            top2++;
            arr[top2] = x;
        }

        void pop1(){
            if(top1 == -1){
                cout << "Stack is empty" ;
                return;
            }
            top1--;
        }

        void pop2(){
            if(top2 == n / 2){
                cout << "Stack is empty" ;
                return;
            }
            top2--;
        }

        int Top1(){
            if(top1 == -1){
                cout << "Stack is empty ";
                return -1;
            }
            return arr[top1];
        }

        int Top2(){
            if(top2 == n / 2){
                cout << "Stack is empty ";
                return -1;
            }
            return arr[top2];
        }

        bool empty1(){
            if(top1 == -1)
                return true;
            return false;
        }

        bool empty2(){
            if(top2 == n / 2)
                return true;
            return false;
        }
};

int main(){
    twoStack tS;

    tS.push1(5);
    tS.push2(10);
    tS.push2(15);
    tS.push1(11);
    tS.push2(7);

    cout << tS.Top1() << endl;
    cout << tS.Top2() << endl;

    tS.pop1();
    tS.pop2();

    cout << tS.Top1() << endl;
    cout << tS.Top2() << endl;

    tS.pop1();
    tS.pop2();

    cout << tS.empty1() << endl;
    cout << tS.empty2() << endl;

    return 0;
}