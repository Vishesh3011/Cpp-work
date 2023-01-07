#include<iostream>

using namespace std;

struct node{
    int data;

    struct node * left;
    struct node * right;

    node(int val){
        data = val;
        left = NULL;
        right =NULL;
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

int calcDiameter(node * root){
    if(root == NULL){
        return 0;
    }

    int lLength = calcHeight(root -> left);
    int rLength = calcHeight(root -> right); 

    int currDiameter = lLength + rLength + 1;

    int lDiameter = calcDiameter(root -> left);
    int rDiameter = calcDiameter(root -> right);

    return max(currDiameter, max(lDiameter, rDiameter));
}

int main(){
    struct node * root = new node(1);
    
    root -> left = new node(2);
    root -> right = new node(3);

    root -> left -> left = new node(4);
    root -> left -> right = new node(5);

    root -> right -> left = new node(6);
    root -> right -> right = new node(7);

    cout<<calcHeight(root)<<endl;

    cout<<calcDiameter(root)<<endl;

    return 0;
}