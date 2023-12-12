#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    /*int find(vector<vector<int>> &v, int n, int m, vector<vector<int>> &thor, int i, int j){
        if(i >= n || i<0 || j<0 || j >= m) return 0;
        if(thor[i][j] != -1) return thor[i][j];
        return thor[i][j] = v[i][j] + max({find(v,n,m,thor,i,j+1),find(v,n,m,thor,i-1,j+1),find(v,n,m,thor,i+1,j+1)});
    }*/
    int find(int i, int j, vector<vector<int>> &thor)
    {
        int val = 0;
        if ((j >= thor[0].size() - 1))
            return 0;
        if (i > 0)
            val = max(val, thor[i - 1][j + 1]);
        val = max(val, thor[i][j + 1]);
        if (i < thor.size() - 1)
            val = max(val, thor[i + 1][j + 1]);
        return val;
    }
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        vector<vector<int>> thor(n, vector<int>(m, -1));
        int ans = -1;
        for (int j = m - 1; j >= 0; j--)
        {
            for (int i = 0; i < n; i++)
            {
                thor[i][j] = M[i][j] + find(i, j, thor);
                ans = max(ans, thor[i][j]);
            }
        }
        return ans;
    }
};