#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        int maxy = INT_MIN;
        vector<int> row_val(n), col_val(n);
        for(int i = 0; i<n; i++){
            int cur_row = 0, cur_col = 0;
            for(int j = 0; j<n; j++){
                cur_row += matrix[i][j];
                cur_col += matrix[j][i];
            }
            row_val[i] = cur_row;
            col_val[i] = cur_col;
            maxy = max({maxy,cur_row,cur_col});
        }
        int ans = 0;
        for(int i = 0; i<n; i++){
            row_val[i] = maxy-row_val[i];
            col_val[i] = maxy-col_val[i];
        }
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n && row_val[i]; j++){
                int min_opn = min(row_val[i],col_val[j]);
                col_val[j] -= min_opn;
                row_val[i] -= min_opn;
                ans += min_opn;
            }
        }
        return ans;
    } 
};