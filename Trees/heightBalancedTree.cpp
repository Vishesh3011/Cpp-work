#include<iostream>

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

int calcHeight(node * root){
    if(root == NULL){
        return 0;
    }

    int lLength = calcHeight(root -> left);
    int rLength = calcHeight(root -> right); 

    return max(lLength, rLength) + 1;
}

bool isBalanced(node * root){
    if(root == NULL){
        return true;
    }

    if(!isBalanced(root -> left))
        return false;
         
    if(!isBalanced(root -> right))
        return false;

    int lHeight = calcHeight(root -> left);
    int rHeight = calcHeight(root -> right);

    if(abs(lHeight - rHeight) <= 1){
        return true;
    }
    else
        return false;
}

int main(){
    struct node * root = new node(1);

    root -> left = new node(2);
    root -> right = new node(3);

    root -> left -> left = new node(4);
    root -> left -> right = new node(5);

    root -> right -> left = new node(6);
    root -> right -> right = new node(7);

    if(isBalanced(root))
        cout<<"Balanced Tree.";
    else
        cout<<"Unbalanced.";

    return 0;
}