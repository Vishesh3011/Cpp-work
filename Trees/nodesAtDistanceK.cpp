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

void printSubTreeNodesAtK(node * root, int k){
    if(root == NULL || k < 0)
        return;
    
    if(k == 0){
        cout<<root -> data<<" ";
        return;
    }

    printSubTreeNodesAtK(root -> left, k - 1);
    printSubTreeNodesAtK(root -> right, k - 1);
}

int printNodesAtK(node * root, node * target, int k){
    if(root == NULL || k < 0){
        return -1;
    }

    if(root == target){
        printSubTreeNodesAtK(root, k);
        return 0;
    }

    int dl = printNodesAtK(root -> left, target, k);
    if(dl != -1){
        if(dl + 1 == k)
            cout<<root -> data<<" ";
        else
            printSubTreeNodesAtK(root -> right, k - dl - 2);
        return 1 + dl;
    }

    int dr = printNodesAtK(root -> right, target, k);
    if(dr != -1){
        if(dr + 1 == k)
            cout<<root -> data<<" ";
        else
            printSubTreeNodesAtK(root -> left, k - dr - 2);
        return 1 + dr;
    }

    return -1;
}

int main(){
    struct node * root = new node(1);

    root -> left = new node(5);
    root -> right = new node(2);

    root -> left -> left = new node(6);
    root -> left -> left -> right = new node(7);

    root -> left -> left -> right -> left = new node(8);
    root -> left -> left -> right -> right = new node(9);

    root -> right -> left = new node(3);
    root -> right -> right = new node(4);

    printNodesAtK(root, root -> left, 3);

    return 0;
}