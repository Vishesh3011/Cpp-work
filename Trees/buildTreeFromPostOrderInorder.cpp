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
    static int idx = end;
    if(start > end){
        return NULL;
    }

    int curr = a[idx];
    idx--;

    node * Node = new node(curr);

    if(start == end){
        return Node;
    }

    int pos = search(b, start, end, curr);
    
    Node -> right = buildTree(a, b, pos + 1, end);
    Node -> left = buildTree(a, b, start, pos - 1);

    return Node;
}

void inOrderTraversal(node * root){
    if(root == NULL)
        return;
    inOrderTraversal(root -> left);
    cout<<root -> data<<" ";
    inOrderTraversal(root -> right);
}

void postOrderTraversal(node * root){
    if(root == NULL)
        return;
    postOrderTraversal(root -> left);
    postOrderTraversal(root -> right);
    cout<<root -> data<<" ";
}

int main(){
    int postOrder[] = {4, 2, 5, 3, 1}; 
    int inOrder[] = {4, 2, 1, 5, 3};


    node * root = buildTree(postOrder, inOrder, 0, 4);

    inOrderTraversal(root);
    cout<<endl;
    postOrderTraversal(root);
    
    return 0;
}