#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution
{
public:
    void inorder(Node* root1, vector<int> &a){
        if(!root1) return;
        inorder(root1->left,a);
        a.push_back(root1->data);
        inorder(root1->right,a);
        return;
    }
    int countPairs(Node* root1, Node* root2, int x)
    {
        vector<int> a, b; 
        inorder(root1,a);
        inorder(root2,b);
        int i = 0, j = b.size()-1;
        int ans = 0;
        while(i < a.size() && j >= 0){
            int sum = a[i] + b[j];
            if(sum == x){
                ans++;
                i++;
                j--;
            }
            else if(sum > x){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};