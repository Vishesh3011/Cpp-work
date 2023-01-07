#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode * left, * right;

    TreeNode (int data){
        val = data;
        left = NULL;
        right = NULL;    
    }
};

void printPath(TreeNode * root, int k, vector <int> path){
    if(!root)
        return;
    
    path.push_back(root -> val);

    printPath(root -> left, k, path);
    printPath(root -> right, k, path);

    int sum = 0;
    for(int i = path.size() - 1; i >= 0; i--){
        sum += path[i];
        if(sum == k){
            for(int j = i; j < path.size(); j++)
                cout << path[j] << " ";
            cout << endl;
        }
    }
    path.pop_back();
}

void printPathUntilK(TreeNode * root, int k){
    vector <int> path;
    printPath(root, k, path);
}

int main(){
    TreeNode * root = new TreeNode(1);

    root -> left = new TreeNode(3);
    root -> right = new TreeNode(-1);

    root -> left -> left = new TreeNode(2);
    root -> left -> right = new TreeNode(1);

    root -> left -> right -> left = new TreeNode(1);

    root -> right -> left = new TreeNode(4);
    root -> right -> right = new TreeNode(5);

    root -> right -> left -> left = new TreeNode(1);
    root -> right -> left -> right = new TreeNode(2);

    root -> right -> right -> right = new TreeNode(6);

    int k = 5;

    printPathUntilK(root, k);

    return 0;
}