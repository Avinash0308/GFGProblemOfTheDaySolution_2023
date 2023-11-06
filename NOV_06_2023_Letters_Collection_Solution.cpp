#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        // code here
        vector<int> ans(q);
        for(int i = 0; i<q; i++){
            int val = queries[i][0], x = queries[i][1], y = queries[i][2];
            int j;
            for( j = max(0,y-val);j<=y+val && x-val>=0 && j<m; j++ ){
                ans[i] += mat[x-val][j];
            }
            for(j = max(x-val+1,0); j<=x+val && y-val>=0 && j<n; j++){
                ans[i] += mat[j][y-val];
            }
            for(j = max(y-val+1,0); j<=y+val && x+val<n && j<m; j++){
                ans[i] += mat[x+val][j];
            }
            for(j = max(x-val+1,0); j<=x+val-1 && y+val < m && j<n; j++){
                ans[i] += mat[j][y+val];
            }
        }
        return ans;
    }
};