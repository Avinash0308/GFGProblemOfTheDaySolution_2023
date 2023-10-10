#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left, *right;
};


class Solution
{
private:

public:
    
    vector <int> KDistanceNodes(Node* root, int target , int k)
    {
        // return the sorted vector of all nodes at k dist
        unordered_map<Node*,Node*>mp;
         mp[root]=NULL;
         queue<Node*>q;
         q.push(root);
         Node*new_root=NULL;
           while(q.size())
           {
               int x=q.size();
               for(int i=0;i<x;i++)
               {
                  Node*z=q.front();
                  if(target==z->data)
                  {
                      new_root=z;
                  }
                  q.pop();
                    if(z->left)
                    {
                        mp[z->left]=z;
                        q.push(z->left);
                        
                    }
                    if(z->right)
                    {
                        mp[z->right]=z;
                        q.push(z->right);
                    }
                    
               }
           }
           unordered_map<Node*,bool>mp1;
           int l=0;
           queue<Node*>q1;
           q1.push(new_root);
           mp1[new_root]=true;
           while(q1.size())
           {
               int x=q1.size();
                 l++;
               for(int i=0;i<x;i++)
               {
                 Node*z=q1.front();
                   q1.pop();
                  if(z->left&&mp1[z->left]==false)
                  {
                     mp1[z->left]=true;
                     q1.push(z->left);
                  }
                 if(z->right&&mp1[z->right]==false)
                  {
                     mp1[z->right]=true;
                     q1.push(z->right);
                  }
                 if(mp[z]&&mp1[mp[z]]==false)
                  {
                      mp1[mp[z]]=true;
                      q1.push(mp[z]);
                  }
                 
               }
               if(l==k)
               {
                   break;
               }
           }
           vector<int>ans;
           while(q1.size())
           {
             ans.push_back(q1.front()->data);
             q1.pop();
             
           }
           sort(ans.begin(),ans.end());
           return ans;
    }
};