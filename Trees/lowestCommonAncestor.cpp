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

bool getPath(node * root, int n, vector <int> p){
    if(root == NULL)
        return false;

    p.push_back(root -> data);

    if(root -> data == n)
        return true;

    if(getPath(root -> left, n, p) || getPath(root -> right, n, p)){
        return true;
    }

    p.pop_back();
    return false;
}

int LCA(node * root, int n1, int n2){
    vector <int> p1, p2;

    if(!getPath(root, n1, p1) || !getPath(root, n2, p2)){
        return -1;
    }

    int pc;
    for(pc = 0; pc < p1.size() && pc < p2.size(); pc++){
        if(p1[pc] != p2[pc])
            break;
    }

    return p1[pc - 1];
}

int main(){
    struct node * root = new node(1);

    root -> left = new node(2);
    root -> right = new node(3);

    root -> left -> left = new node(4);

    root -> right -> left = new node(5);
    root -> right -> right = new node(6);

    root -> right -> left -> left = new node(7);

    cout<<LCA(root, 7, 6)<<endl;

    return 0;
}