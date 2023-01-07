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

int search(int a[], int start, int end, int curr){
    for(int i = start; i <= end; i++){
        if(a[i] == curr)
            return i;
    }
    return -1;
}

node * buildTree(int a[], int b[], int start, int end){
    static int idx = 0;
    if(start > end){
        return NULL;
    }

    int curr = a[idx];
    idx++;
    node * Node = new node(curr);

    if(start == end){
        return Node;
    }

    int pos = search(b, start, end, curr);
    Node -> left = buildTree(a, b, start, pos - 1);
    Node -> right = buildTree(a, b, pos + 1, end);

    return Node;
}

void preOrderTraversal(node * root){
    if(root == NULL)
        return;
    cout<<root -> data<<" ";
    preOrderTraversal(root -> left);
    preOrderTraversal(root -> right);
}

void inOrderTraversal(node * root){
    if(root == NULL)
        return;
    inOrderTraversal(root -> left);
    cout<<root -> data<<" ";
    inOrderTraversal(root -> right);
}

int main(){
    int preOrder[] = {1, 2, 4, 3, 5}; 
    int inOrder[] = {4, 2, 1, 5, 3};


    node * root = buildTree(preOrder, inOrder, 0, 4);

    preOrderTraversal(root);
    cout<<endl;
    inOrderTraversal(root);

    return 0;
}