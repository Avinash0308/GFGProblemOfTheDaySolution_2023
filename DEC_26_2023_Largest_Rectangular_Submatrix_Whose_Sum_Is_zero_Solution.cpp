#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> sumZeroMatrix(vector<vector<int>> a)
    {
        int n = a.size(), m = a[0].size();
        // Code Here
        int left, right, down, up;
        left = right = down = up = 0;
        for (int i = 0; i < m; i++)
        {
            vector<int> sum(n, 0);
            for (int j = i; j < m; j++)
            {
                unordered_map<int, int> mp;
                mp[0] = -1;
                int cur = 0;
                int l = 0, r = 0;
                for (int k = 0; k < n; k++)
                {
                    sum[k] += a[k][j];
                    cur += sum[k];
                    if (mp.count(cur) != 0)
                    {
                        if (k - mp[cur] > r - l)
                        {
                            r = k + 1;
                            l = mp[cur] + 1;
                        }
                    }
                    else
                    {
                        mp[cur] = k;
                    }
                }
                if ((j - i + 1) * (r - l) > (right - left) * (down - up))
                {
                    up = l, down = r, left = i, right = j + 1;
                }
            }
        }
        vector<vector<int>> ans;
        for (int i = up; i < down; i++)
        {
            vector<int> v;
            for (int j = left; j < right; j++)
            {
                v.push_back(a[i][j]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};