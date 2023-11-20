#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

class Solution
{
    long long int ans = 0;
    long long int mod = 1e9 + 7;
    unordered_map<int, int> m;
    void solve(Node *cur, int k, int total)
    {
        if (!cur)
            return;
        if (m.count(total + cur->data - k) != 0)
            ans = (ans + m[total + cur->data - k]) % mod;
        m[total + cur->data]++;
        solve(cur->left, k, total + cur->data);
        solve(cur->right, k, total + cur->data);
        m[total + cur->data]--;
    }

public:
    int sumK(Node *root, int k)
    {
        // code here
        m[0] = 1;
        solve(root, k, 0);
        return ans;
    }
};