#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        Node* insert(Node* node, int data) {
            if(node == NULL){
                Node* newnode = new Node(data);
                return newnode;
            }
            if(node->data < data){
                //left;
                node->right = insert(node->right, data);
            }else if(node->data >data){
                //right
                node->left = insert(node->left, data);
            }
            return node;
    }

};