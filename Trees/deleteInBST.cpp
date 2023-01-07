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

void inorderTraversal(node * root){
    if(root == NULL)
        return;
    
    inorderTraversal(root -> left);
    cout<<root -> data<<" ";
    inorderTraversal(root -> right);
}

node * insertInBST(node * root, int val){
    if(root == NULL)
        return new node(val);
    
    if(root -> data > val)
        root -> left = insertInBST(root -> left, val);
    
    if(root -> data < val)
        root -> right = insertInBST(root -> right, val);

    return root;
}

node * inorderSuccessor(node *root){
    node * curr = root;
    while(curr && curr -> left != NULL)
        curr = curr -> left;
    return curr;
}

node * deleteInBST(node * root, int key){
    if(key < root -> data)
        root -> left = deleteInBST(root -> left, key);
    else if(key > root -> data)
        root -> right = deleteInBST(root -> right, key);
    else{
        if(root -> left == NULL){
            node * temp = root -> right;
            free(root);
            return temp;
        }
        else if(root -> right == NULL){
            node * temp = root -> left;
            free(root);
            return temp;
        }
        node * temp = inorderSuccessor(root -> right);
        root -> data = temp -> data;
        root -> right = deleteInBST(root -> right, temp -> data);
    }
    return root;
}

int main(){
    node * root = NULL;

    root = insertInBST(root, 4);

    insertInBST(root, 2);
    insertInBST(root, 5);

    insertInBST(root, 1);
    insertInBST(root, 3);

    insertInBST(root, 6);

    inorderTraversal(root);
    cout<<endl;

    root = deleteInBST(root, 2);

    inorderTraversal(root);
    cout<<endl;

    return 0;
}