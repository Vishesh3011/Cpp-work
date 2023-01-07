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

bool isIdentical(node * root1, node * root2){
    if(root1 == NULL && root2 == NULL)
        return true;
    else if(root1 == NULL || root2 == NULL)
        return false;
    else{
        bool cond1 = root1 -> data == root2 -> data;
        bool cond2 = isIdentical(root1 -> left, root2 -> left);
        bool cond3 = isIdentical(root1 -> right, root2 -> right);

        if(cond1 && cond2 && cond3)
            return true;
        
        return false;
    }   
}

int main(){
    node * root1 = new node(2);

    root1 -> left = new node(1);
    root1 -> right = new node(3);

    // node * root2 = new node(6);

    // root2 -> left = new node(4);
    // root2 -> right = new node(7);

    node * root2 = new node(2);

    root2 -> left = new node(1);
    root2 -> right = new node(3);

    root2 -> left -> left = new node(0);


    if(isIdentical(root1, root2))
        cout<<"BSTs are Identical";
    else
        cout<<"BSTs not Identical";

    return 0;
}