#include<bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    struct TreeNode * left;
    struct TreeNode * right;

    TreeNode(int data){
        val = data;
        left = NULL;
        right = NULL;
    }
};

void bfsTree(TreeNode * root){
    if(!root)
        return;
    queue <TreeNode *> q;
    q.push(root);
    while(!q.empty()){
        TreeNode * curr = q.front();
        cout << curr -> val << " ";
        q.pop();
        if(curr -> left)
            q.push(curr -> left);
        if(curr -> right)
            q.push(curr -> right);    
    }
    cout << endl;
}

void dfsTree(TreeNode * root){
    if(!root)
        return;
    cout << root -> val << " ";
    dfsTree(root -> left);
    dfsTree(root -> right);
}


int main(){
    struct TreeNode * root = new TreeNode(1);

    root -> left = new TreeNode(7);
    root -> right = new TreeNode(10);

    root -> left -> left = new TreeNode(9);
    root -> left -> right = new TreeNode(2);
    
    root -> left -> left -> left = new TreeNode (11);
    root -> left -> left -> right = new TreeNode (10);

    root -> left -> right -> left = new TreeNode (9);
    root -> left -> right -> right = new TreeNode (6);


    root -> right -> left = new TreeNode(2);
    root -> right -> right = new TreeNode(7);

    root -> right -> left -> left = new TreeNode(1);
    root -> right -> left -> right = new TreeNode(7);

    root -> right -> right -> left = new TreeNode(6);
    root -> right -> right -> right = new TreeNode(10);

    bfsTree(root);

    dfsTree(root);

    return 0;
}