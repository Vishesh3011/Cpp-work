#include<iostream>

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

void insertAtHead(node * &head, int val){
    node * n = new node(val);
    n -> next = head;
    head = n;
}

void insertAtTail(node * &head, int val){
    node * n = new node(val);
    
    if(head == NULL){
        head = n;
        return;
    }

    node * temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = n;
}

int length(node * head){
    int l = 0;
    node * temp = head;
    while(temp != NULL){
        temp = temp -> next;
        l++;
    }
    return l;
}

node * kAppend(node * &head, int k){
    node * newHead;
    node * newTail;
    node * tail = head;

    int l = length(head);
    int count = 1;
    k = k % l;

    while(tail -> next != NULL){
        if(count == l - k)
            newTail = tail;
        if(count == l - k + 1)
            newHead = tail;
        tail = tail -> next;
        count++;
    }

    newTail -> next = NULL;
    tail -> next = head;

    return newHead;
}

void display(node * head){
    node * temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" -> ";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node * head = NULL;
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++){
        insertAtTail(head, i);
    }

    display(head);

    node * newHead = kAppend(head, 3);

    display(newHead);

    return 0;
}