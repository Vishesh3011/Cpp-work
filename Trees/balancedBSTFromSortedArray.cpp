#include<iostream>

using namespace std;

struct node{
    int data;
    node * left, * right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

node * sortedToBST(int a[], int start, int end){
    if(start > end)
        return NULL;

    int mid = (start + end) / 2;

    node * root = new node(a[mid]);

    root -> left = sortedToBST(a, start, mid - 1);

    root -> right = sortedToBST(a, mid + 1, end);

    return root;
}

void preOrderTraversal(node * root){
    if(root == NULL)
        return;
    
    cout<< root -> data << " ";
    preOrderTraversal(root -> left);
    preOrderTraversal(root -> right);
}

int main(){
    int a[] = {10, 20, 30, 40, 50};

    node * root = sortedToBST(a, 0, 4);

    preOrderTraversal(root);

    return 0;
}

