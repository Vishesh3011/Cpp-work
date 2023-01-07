/* A binary tree follows following properties:
    1) Maximum number of nodes of at level L = 2 ^ L.
    2) Maximum number of node of tree with height H = 2 ^ H - 1.
    3) For N nodes, the minimum possible height of the tree or miniumum number of leaves are log(base 2) (N + 1).
    4) A binary trees with L leaves has atleast log(base 2) (N + 1) + 1number of levels
*/

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

int main(){
    struct node * root = new node(1);
    root -> left = new node(2);
    root -> right = new node(3);

    root -> left -> left = new node(4);
    root -> left -> right = new node(5);

    root -> right -> left = new node(6);
    root -> right -> right = new node(7);

    /*
                1
               / \
              2   3
             / \ / \
            4  5 6  7            

    */

    return 0;
}