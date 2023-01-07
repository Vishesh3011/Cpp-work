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

void display(ListNode * &head){
    if(!head)
        return;

    ListNode * temp = head;
    while(temp){
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

ListNode * mergeList(ListNode * &l1, ListNode * &l2){
    ListNode * ptr = new ListNode(0);
    ListNode * curr = ptr;

    while(l1 && l2){
        if(l1 -> data <= l2 -> data){
            curr -> next = l1;
            l1 = l1 -> next;
        }
        else{
            curr -> next = l2;
            l2 = l2 -> next;
        }
        curr = curr -> next;
    }

    if(l1){
        curr -> next = l1;
        l1 = l1 -> next;
    }
    if(l2){
        curr -> next = l2;
        l2 = l2 -> next;
    }
    return ptr -> next;
}

// ListNode * mergeList(ListNode * &l1, ListNode * &l2){
//     if(!l1)
//         return l2;
//     if(!l2)
//         return l1;
//     if(l1 -> data <= l2 -> data){
//         l1 -> next = mergeList(l1 -> next, l2);
//         return l1;
//     }
//     else{
//         l2 -> next = mergeList(l1, l2 -> next);
//         return l2;
//     }
// }

ListNode * mergeSortOnLinkedLists(ListNode * &head){
    if(head == NULL || head -> next == NULL)
        return head;

    ListNode * slow = head;
    ListNode * fast = head;
    ListNode * temp = NULL;

    while(fast && fast -> next){
        temp = slow;
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    temp -> next = NULL;
    ListNode * l1 = mergeSortOnLinkedLists(head);
    ListNode * l2 = mergeSortOnLinkedLists(slow);

    return mergeList(l1, l2);
}

int main(){
    ListNode * head = NULL;
    
    insert(head, 40);
    insert(head, 20);
    insert(head, 60);
    insert(head, 10);
    insert(head, 50);
    insert(head, 30);

    display(head);

    ListNode * newHead = mergeSortOnLinkedLists(head);

    display(newHead);

    return 0;
}