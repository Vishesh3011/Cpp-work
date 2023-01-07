#include<bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    struct TreeNode * left, * right;

    TreeNode(int data){
        val = data;
        left = NULL;
        right = NULL;
    }
};

TreeNode * insertInBST(TreeNode * root, int data){
    if(!root)
        return new TreeNode(data);
    
    if(root -> val < data)
        root -> right = insertInBST(root -> right, data);
    else
        root -> left = insertInBST(root -> left, data);
    
    return root;
}

void inorderTraversal(TreeNode * root){
    if(!root)
        return;

    inorderTraversal(root -> left);
    cout << root -> val << " ";
    inorderTraversal(root -> right);
}

bool checkForDedEnd(TreeNode * root){
    unordered_map <int, int> um1, um2;
    
    if(!root)
        return false;

    TreeNode * temp = root;

    while(!temp){
        um1[temp -> val]++;
        temp = temp -> left;
        if(temp == NULL)
            um2[temp -> val]++;
    }

    temp = root;

    while(!temp){
        um1[temp -> val]++;
        temp = temp -> right;
        if(temp == NULL)
            um2[temp -> val]++;
    }
}

int main(){
    TreeNode * root = NULL;

    root = insertInBST(root, 5);

    insertInBST(root, 1);
    insertInBST(root, 3);
    insertInBST(root, 4);
    insertInBST(root, 2);
    insertInBST(root, 7);

    inorderTraversal(root);

    cout << checkForDedEnd(root);

    return 0;
}