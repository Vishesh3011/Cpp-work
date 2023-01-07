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

void insertAtTail(node * &head, int val){
    node * n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    node * temp = head;

    while(temp -> next != NULL)
        temp = temp -> next;
    
    temp -> next = n;
}

void display(node * head){
    node * temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" -> ";
        temp = temp -> next;
    }                   
    cout<<"NULL"<<endl;
}

node * reverse(node * &head){
    node * currPtr = head;
    node * prevPtr = NULL;
    node * nextPtr;
    while(currPtr != NULL){
        nextPtr = currPtr -> next;
        currPtr -> next = prevPtr;
        
        prevPtr = currPtr;
        currPtr = nextPtr;
    }
    return prevPtr;
}

node * reverseUsingRecursion(node * &head){
    if(head == NULL || head -> next == NULL)
        return head;
    node * newHead = reverseUsingRecursion(head -> next);
    head -> next -> next = head;
    head -> next = NULL;
    return newHead;
}

node * reverseKNodes(node * &head, int k){
    node * prevPtr = NULL;
    node * currPtr = head;
    node * nextPtr;

    int count = 0;
    while(currPtr != NULL && count < k){
        nextPtr = currPtr -> next;
        currPtr-> next = prevPtr;

        prevPtr = currPtr;
        currPtr = nextPtr;

        count++;
    }

    if(nextPtr != NULL)
        head -> next = reverseKNodes(nextPtr, k);
    
    return prevPtr;
}

int main(){
    node * head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    node * newHead = reverse(head);
    display(newHead);
    node * newhead = reverse(newHead);
    display(newhead);
    node * newHeaD = reverseKNodes(newhead, 2);
    display(newHeaD);

    return 0;
}