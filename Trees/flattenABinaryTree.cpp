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

void flatten(node * root){
    if(root == NULL || (root -> left == NULL && root -> right == NULL))
        return;
    
    if(root -> left != NULL){
        flatten(root -> left);

        node * temp = root -> right;
        root -> right = root -> left;
        root -> left = NULL;

        node * t = root -> right;
        while(t -> right != NULL)
            t = t -> right;
        t -> right = temp;
    }
    flatten(root -> right);
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
    struct node * root = new node(4);

    root -> left = new node(9);
    root -> right = new node(5);

    root -> left -> left = new node(1);
    root -> left -> right = new node(3);

    root -> right -> left = new node(7);
    root -> right -> right = new node(6);

    flatten(root);

    preOrderTraversal(root);


    return 0;
}