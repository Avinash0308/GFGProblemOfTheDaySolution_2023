#include<bits/stdc++.h>
using namespace std;
struct Node
{
     int data;
     struct Node* left;
     struct Node* right;
};

void printCorner(Node *root)
{

// Your code goes here
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i = 0; i<n; i++){
            if(i == 0 || i == n-1) cout<<q.front()->data<<" ";
            if(q.front()->left) q.push(q.front()->left);
            if(q.front()->right) q.push(q.front()->right);
            q.pop();
        }
    }
    return;
    
}