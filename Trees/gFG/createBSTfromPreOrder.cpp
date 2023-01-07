#include<bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode * left, * right;

    TreeNode(int data){
        val = data;
        left = NULL;
        right = NULL;
    }
};

TreeNode * root = NULL;

void createBST(int i){
    if(root -> val > i)
        root -> left -> val = i;
    else
        root -> right -> val = i;
}

TreeNode * constructBST(vector <int> v){
    if(!root)
        root -> val = v[0];
    for(int i = 1; i < v.size(); i++)
        createBST(v[i]);
    return root;
}

int main(){
    vector <int> v = {10, 5, 1, 7, 40, 50};

    constructBST(v);

    return 0;
}