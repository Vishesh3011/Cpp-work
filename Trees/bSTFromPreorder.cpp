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

node * constructBST(int preOrder[], int * preOrderIndex, int key, int min, int max, int n){
    if(* preOrderIndex >= n)
        return NULL;

    node * root = NULL;

    if(key > min && key < max){
        root = new node(key);
        * preOrderIndex = * preOrderIndex + 1;

        if(* preOrderIndex < n)
            root -> left = constructBST(preOrder, preOrderIndex, preOrder[* preOrderIndex], min, key, n);

        if(* preOrderIndex < n)
            root -> right = constructBST(preOrder, preOrderIndex, preOrder[* preOrderIndex], key, max, n);
    }
    return root;
}

void preOrderTraversal(node * root){
    if(root == NULL)
        return;

    cout<<root -> data<<" ";
    preOrderTraversal(root -> left);
    preOrderTraversal(root -> right);
}

int main(){
    int preOrder[] = {10, 2, 1, 13, 11};

    int n = 5;

    int preOrderIndex = 0;

    node * root = constructBST(preOrder, &preOrderIndex, preOrder[0], INT_MIN, INT_MAX, n);

    preOrderTraversal(root);

    return 0;
}