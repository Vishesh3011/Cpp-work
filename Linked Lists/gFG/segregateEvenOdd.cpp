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

void insert(node * &head, int val){
    node * n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    node * temp = head;

    while(temp)
        temp = temp -> next;
    temp -> next = n;
}

void display(node * &head){
    if(head == NULL)
        return;
    node * temp = head;
    while(temp){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << NULL << endl;
}

void segregateEvenOdd(node * head){
    node * curr = head;
    node * end = head;
    while(end)
        end = end -> next;
    
}

int main(){
    node * head = NULL;
    insert(head, 17);
    insert(head, 15);
    insert(head, 8);
    insert(head, 12);
    insert(head, 10);
    insert(head, 5);
    insert(head, 4);
    insert(head, 1);
    insert(head, 7);
    insert(head, 6);
    display(head);
    segregateEvenOdd(head);
    display(head);

    return 0;
}