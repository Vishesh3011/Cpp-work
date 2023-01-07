#include<bits/stdc++.h>

using namespace std;

struct TreeNode {
    TreeNode * left, * right;
    int val;

    TreeNode (int data){
        val = data;
        left = NULL;
        right = NULL;
    }
};

void inorder(TreeNode * root, vector <int> &v){
    if(!root)
        return;

    inorder(root -> left, v);
    v.push_back(root -> val);
    inorder(root -> right, v);
}

int findMedian(TreeNode * root){
    vector <int> v;
    inorder(root, v);
    int median, n = v.size();
    if(n % 2 == 0)
        median = (v[n / 2] + v[(n / 2) + 1]);
    else
        median = v[n / 2];
    return median;
}

int main(){
    TreeNode * root = new TreeNode(6);

    root -> left = new TreeNode(3);
    root -> right = new TreeNode(8);

    root -> left -> left = new TreeNode(1);
    root -> left -> right = new TreeNode(4);

    root -> right -> left = new TreeNode(7);
    root -> right -> right = new TreeNode(9);

    cout << findMedian(root);

    return 0;
}