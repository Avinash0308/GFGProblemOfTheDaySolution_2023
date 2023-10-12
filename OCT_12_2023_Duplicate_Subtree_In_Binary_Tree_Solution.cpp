#include<bits/stdc++.h>
using namespace std;
struct Node
{
  char data;
  struct Node* left;
  struct Node* right;
};

class Solution {
  public:
    /*This function returns true if the tree contains 
    a duplicate subtree of size 2 or more else returns false*/
    bool ans = false;
    unordered_map<string,int> m;
    string solve(Node* root){
        if(!root) return "N";
        if(root->left || root->right){
            string cur = solve(root->left);
            cur.push_back(root->data);
            cur += solve(root->right);
            if(ans) return cur;
            if(m.count(cur)){
                ans = true;
            }
            m[cur]++;
            return cur;
        }
        else{
            string cur = "N";
            cur.push_back(root->data);
            cur.push_back('N');
            return cur;
        }
    }
    int dupSub(Node *root) {
        solve(root);
        return ans;
    }
};