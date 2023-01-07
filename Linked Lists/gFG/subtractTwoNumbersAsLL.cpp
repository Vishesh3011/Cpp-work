#include<bits/stdc++.h>

using namespace std;

class ListNode{
    public:
        int data;
        ListNode * next;

        ListNode(int val){
            data = val;
            next = NULL;
        }
};

void insert(ListNode * &head, int val){
    ListNode * n = new ListNode(val);

    if(head == NULL){
        head = n;
        return;
    }

    ListNode * temp = head;

    while(temp -> next)
        temp = temp -> next;

    temp -> next = n;
}

void display(ListNode * head){
    if(!head)
        return;
    ListNode * temp = head;
    while(temp){
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }

    cout << "NULL" << endl;
}

ListNode * subtractLL(ListNode * &head1, ListNode * head2){
    return nullptr;
}

int main(){
    ListNode * head1 = NULL;
    ListNode * head2 = NULL;

    insert(head1, 1);
    insert(head1, 0);
    insert(head1, 0);

    display(head1);

    insert(head2, 1);

    display(head2);

    // insert(head2, 1);
    // insert(head2, 1);

    ListNode * newHead = subtractLL(head1, head2);

    display(newHead);

    return 0;
}