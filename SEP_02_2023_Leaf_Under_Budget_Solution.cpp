#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    int getCount(Node *root, int k)
    {
        //code here
        if(!root) return 0;
        queue<Node*> q;
        q.push(root);
        int lvl = 1;
        int ans = 0;
        while(!q.empty() && lvl <= k){
            int n = q.size();
            while(n-- && lvl <= k){
                Node* cur = q.front();
                q.pop();
                if(!(cur->left) && !(cur->right)){
                    k -= lvl;
                    ans++;
                }
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
            lvl++;
        }
        return ans;
    }
};