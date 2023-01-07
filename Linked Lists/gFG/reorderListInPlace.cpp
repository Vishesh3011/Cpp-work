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
    cout << "NULL" << endl;
}

void reorderList(node * &head){
    if(!head || head -> next == NULL || head -> next -> next == NULL)
        return;
    node * secondLast = head;
    while(secondLast -> next -> next){
        secondLast = secondLast -> next;
    }
    secondLast -> next -> next = head -> next;
    head -> next = secondLast -> next;
    secondLast -> next = NULL;
    reorderList(head -> next -> next);
}

int main(){
    node * head = NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);

    display(head);

    reorderList(head);

    display(head);

    return 0;
}