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

void rearrangeInZigZag(node * &head){
    bool flag = true;
    node * temp = head;
    while(temp -> next){
        if(flag){
            if(temp -> data > temp -> next -> data)
                swap(temp -> data, temp -> next -> data);
        }
        else{
            if(temp -> data < temp -> next -> data)
                swap(temp -> data, temp -> next -> data);
        }
        temp = temp -> next;
        flag = !flag;
    }
}

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

void display(node * &head){
    node * temp = head;
    if(head == NULL)
        return;
    while(temp){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

int main(){
    node * head = NULL;
    insert(head, 11);
    insert(head, 15);
    insert(head, 20);
    insert(head, 5);
    insert(head, 10);
    display(head);
    rearrangeInZigZag(head);
    display(head);
    return 0;
}