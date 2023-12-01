#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *right, *left;
};

/*You are required to complete below method */
class Solution
{
public:
    bool isEnd(Node *root, int min, int max = INT_MAX)
    {
        if (!root)
            return false;

        if (!root->left && !root->right)
        {
            if (root->data + 1 == max && root->data - 1 == min)
                return true;
            else
                return false;
        }

        return isEnd(root->left, min, root->data) || isEnd(root->right, root->data, max);
    }

    bool isDeadEnd(Node *root)
    {
        return isEnd(root->left, 0, root->data) || isEnd(root->right, root->data);
    }
};