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


bool isBST(node * root, node * min, node * max){
    if(root == NULL)
        return true;
    
    if(min != NULL && root -> data <= min -> data)
        return false;
    
    if(max != NULL && root -> data >= max -> data)
        return false;
    
    bool leftValid = isBST(root -> left, min, root);
    bool rightValid = isBST(root -> right, root, max);

    return leftValid and rightValid;
}

int main(){
    node * root = new node(5);
    
    root -> left = new node(2);
    root -> right = new node(8);

    if(isBST(root, NULL, NULL))
        cout<<"Valid BST"<<endl;
    else
        cout<<"Invalid BST"<<endl; 

    return 0;
}

