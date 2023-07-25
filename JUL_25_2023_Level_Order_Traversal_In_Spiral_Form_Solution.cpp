#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }

};
//Function to return a list containing the level order traversal in spiral form.
vector<int> findSpiral(Node *root)
{
    vector<int>ans;
    queue<Node *> q;
    q.push(root);
    int level = 0;
    while(!q.empty())
    {
        int n = q.size();
        vector<int> temp;
        while(n--)
        {
            auto front = q.front();
            q.pop();
            temp.push_back(front->data);
            if(front->left)
                q.push(front->left);
            if(front->right)
                q.push(front->right);
        }
        
        if(!level)
            reverse(temp.begin(),temp.end());
        for(auto it : temp)
            ans.push_back(it);
        level = 1-level;
    }
    return ans;
}