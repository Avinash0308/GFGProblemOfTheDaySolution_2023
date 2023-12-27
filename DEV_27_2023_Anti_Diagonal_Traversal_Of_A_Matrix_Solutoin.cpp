#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        // Code here
        int n = matrix.size();
        vector<int> ans(n*n);
        int ind = 0;
        for(int i = 0; i<n; i++){
            for(int j = 0, k = i; j<n && k>=0; k--,j++){
                ans[ind++] = matrix[j][k];
            }
        }
        for(int i = 1; i<n; i++){
            for(int j = i, k = n-1; j<n && k>=0; k--,j++){
                ans[ind++] = matrix[j][k];
            }
        }
        return ans;
    }
};