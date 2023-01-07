#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node * left;
    struct node * right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void levelOrderTraversal(node * root){
    if(root == NULL)
        return;
    
    queue <node *> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node * Node = q.front();
        q.pop();
        if(Node != NULL){
            cout<<Node -> data<<" ";
            if(Node -> left)
                q.push(Node -> left);
            if(Node -> right)
                q.push(Node -> right);
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
}

int sumAtKthLevel(node * root, int k){
    if(root == NULL)
        return -1;

    queue <node *> q;

    q.push(root);
    q.push(NULL);

    int sum = 0, level = 0;

    while(!q.empty()){
        node * Node = q.front();
        q.pop();
        if(Node != NULL){
            if(level == k)
                sum += Node -> data;
            if(Node -> left)
                q.push(Node -> left);
            if(Node -> right)
                q.push(Node -> right);
        }
        else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }

    return sum;
}

int main(){
    node * root = new node(1);

    root -> left = new node(2);
    root -> right = new node(3);

    root -> left -> left = new node(4);
    root -> left -> right = new node(5);

    root -> right -> left = new node(6);
    root -> right -> right = new node(7);

    levelOrderTraversal(root);

    cout<<endl;

    cout<<sumAtKthLevel(root, 1);

    return 0;
}