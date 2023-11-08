#include<bits/stdc++.h>
using namespace std;
class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        vector<int> ans;
        int n = matrix.size();
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(i%2) ans.push_back(matrix[i][n-j-1]);
                else ans.push_back(matrix[i][j]);
            }
        }
        return ans;
    }
};