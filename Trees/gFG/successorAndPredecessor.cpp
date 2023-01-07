#include<bits/stdc++.h>

using namespace std;

struct TreeNode{
    int data;
    struct TreeNode * left, * right;

    TreeNode(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

TreeNode * insertInBST(TreeNode * &root, int val){
    if(!root)
        return new TreeNode(val);

    if(root -> data < val)
        root -> right = insertInBST(root -> right, val);
    else
        root -> left = insertInBST(root -> left, val);
    
    return root;

}

void inorderTraversal(TreeNode * root){
    if(!root)
        return;
    
    inorderTraversal(root -> left);
    cout << root -> data << " ";
    inorderTraversal(root -> right);
}

int findSuccessor(TreeNode * root, int key){
    if(!root)
        return -1;
    
    if(root -> data == key)
        return root -> data;

    if(root -> data < key)
        findSuccessor(root -> right, key);
    else
        findSuccessor(root -> left, key);
}


int main(){
    struct TreeNode * root = NULL;

    root = insertInBST(root, 5);

    insertInBST(root, 1);
    insertInBST(root, 3);
    insertInBST(root, 4);
    insertInBST(root, 8);
    insertInBST(root, 2);
    insertInBST(root, 6);
    insertInBST(root, 7);
    insertInBST(root, 9);
    insertInBST(root, 10);

    inorderTraversal(root);

    cout << findSuccessor(root, 8);

    return 0;
}