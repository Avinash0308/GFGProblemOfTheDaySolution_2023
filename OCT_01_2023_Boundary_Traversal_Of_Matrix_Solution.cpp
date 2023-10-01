#include<bits/stdc++.h>
using namespace std;
class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        vector<vector<int>> directions = {{0,1},{1,0},{0,-1},{-1,0}};
        int tot = n*min(m,2) + max(m-2,0)*min(n,2);
        vector<int> ans(tot);
        int cur = 0;
        int i = 0, j = -1;
        for(int k = 0; k<4; k++){
            i += directions[k][0];
            j += directions[k][1];
            while(i<n && i>=0 && j>=0 && j<m && cur<tot){
                ans[cur] = matrix[i][j];
                i += directions[k][0];
                j += directions[k][1];
                cur++;
            }
            i -= directions[k][0];
            j -= directions[k][1];
        }
        return ans;
    }
};