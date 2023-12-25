#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Function for finding determinant of matrix.
    int determinantOfMatrix(vector<vector<int>> matrix, int n)
    {
        // code here
        int ans = 0;
        if (n == 1)
            return matrix[0][0];
        if (n == 2)
            return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
        for (int i = 0; i < n; i++)
        {
            vector<vector<int>> cur;
            for (int j = 1; j < n; j++)
            {
                vector<int> v;
                for (int k = 0; k < n; k++)
                {
                    if (k == i)
                        continue;
                    v.push_back(matrix[j][k]);
                }
                cur.push_back(v);
            }
            ans += matrix[0][i] * (determinantOfMatrix(cur, n - 1) * ((i % 2) ? -1 : 1));
        }
        return ans;
    }
};