#include<bits/stdc++.h>

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

void countAndSumOfNodes(node * root){
    int count = 0, sum = 0;

    queue <node *> q;

    q.push(root);

    while(!q.empty()){
        node * Node = q.front();
        q.pop();
        count++;
        sum += Node -> data;
        if(Node -> left)
            q.push(Node -> left);
        if(Node -> right)
            q.push(Node -> right);
    }

    cout<<count<<" "<<sum<<endl;
}

int countNodes(node * root){
    if(root == NULL)
        return 0;
    return countNodes(root -> left) + countNodes(root -> right) + 1;
}

int sumNodes(node * root){
    if(root == NULL)
        return 0;
    return sumNodes(root -> left) + sumNodes(root -> right) + root -> data;
}

int main(){
    struct node * root = new node(1);
    root -> left = new node(2);
    root -> right = new node(3);

    root -> left -> left = new node(4);
    root -> left -> right = new node(5);

    root -> right -> left = new node(6);
    root -> right -> right = new node(7);

    countAndSumOfNodes(root);
    cout<<countNodes(root)<<endl;
    cout<<sumNodes(root)<<endl;

    return 0;
}