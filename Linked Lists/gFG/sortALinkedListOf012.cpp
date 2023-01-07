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

void insertAtTail(node * &head, int val){
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

void sortLL(node * &head){
    if(head == NULL)
        return;
    node * n = head;
    int count[3] = {0};
    while(n){
        count[n -> data]++;
        n = n -> next;
    }
    int i = 0;
    n = head;
    while(n){
        if(count[i] == 0)
            i++;
        else{
            n -> data = i;
            count[i]--;
            n = n -> next;
        }
    }
}

void displayLL(node * &head){
    if(head == NULL)
        return;
    node * n = head;
    while(n){
        cout << n -> data << " ";
        n = n -> next;
    }
}

int main(){
    node * head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 0);
    insertAtTail(head, 2);
    insertAtTail(head, 0);
    insertAtTail(head, 1);
    sortLL(head);
    displayLL(head);
    return 0;
}