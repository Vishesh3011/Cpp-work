#include<bits/stdc++.h>

using namespace std;

class node{
    public:
        int data;
        node * next;

        node(int val){
            data = val;
            next = NULL;
        }
};

void insert(int val, node * &head){
    node * n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    node * temp = head;
    while(temp -> next)
        temp = temp -> next;
    temp -> next = n;
}

void display(node * head){
    node * temp = head;
    while(temp){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

int multiplyNum(node * &head1, node * head2){
    int num1 = 0;
    int num2 = 0;
    while(head1){
        int digit = head1 -> data;
        num1 = num1 * 10 + digit;
        head1 = head1 -> next;
    }
    while(head2){
        int digit = head2 -> data;
        num2 = num2 * 10 + digit;
        head2 = head2 -> next;
    }
    return num1 * num2;
}


int main(){
    node * head1 = NULL;
    node * head2 = NULL;
    insert(9, head1);
    insert(4, head1);
    insert(6, head1);
    insert(8, head2);
    insert(4, head2);
    cout << multiplyNum(head1, head2);
    return 0;
}