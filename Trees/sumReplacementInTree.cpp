#include<iostream>

using namespace std;

struct node{
    int data;
    node * left;
    node * right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void sumReplacement(node * root){
    if(root == NULL)
        return;

    sumReplacement(root -> left);
    sumReplacement(root -> right);

    if(root -> left != NULL){
        root -> data += root -> left -> data;
    }

    if(root -> right != NULL){
        root -> data += root -> right -> data;
    }
}

void preOrderTraversal(node * root){
    if(root == NULL){
        return;
    }
    cout<<root -> data<<" ";
    preOrderTraversal(root -> left);
    preOrderTraversal(root -> right);
}

int main(){
    struct node * root = new node(1);

    root -> left = new node(2);
    root -> right = new node(3);

    root -> left -> left = new node(4);
    root -> left -> right = new node(5);

    root -> right -> left = new node(6);
    root -> right -> right = new node(7);

    sumReplacement(root);

    preOrderTraversal(root);

    return 0;
}