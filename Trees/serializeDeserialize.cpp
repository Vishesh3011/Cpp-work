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

void inorderTraversal(struct node * root){
    if(root == NULL)
        return;

    inorderTraversal(root -> left);
    cout<<root -> data<<" ";
    inorderTraversal(root -> right);
}


node * insertBST(node * root, int val){
    if(root == NULL)
        return new node(val);
    
    if(val < root -> data){
        root -> left = insertBST(root -> left, val);
    }
    else
        root -> right = insertBST(root -> right, val);

    return root;
}

int main(){
    struct node * root = NULL;

    root = insertBST(root, 5);

    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);

    inorderTraversal(root);

    return 0;
}