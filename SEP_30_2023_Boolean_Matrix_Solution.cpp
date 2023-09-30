#include<bits/stdc++.h>
using namespace std;
class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        int n = matrix.size(), m = matrix[0].size();
        bool r = false, c = false;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(matrix[i][j]){
                    if(i == 0) r = true;
                    if(j == 0) c = true;
                    matrix[i][0] = 1;
                    matrix[0][j] = 1;
                }
            }
        }
        for(int i = 1; i<m;  i++){
            if(matrix[0][i]){
                for(int j = 1; j<n; j++){
                    matrix[j][i] = 1;
                }
            }
        }
        for(int i = 1; i<n; i++){
            if(matrix[i][0]){
                for(int j = 1; j<m; j++){
                    matrix[i][j] = 1;
                }
            }
        }
        if(c){
            for(int i = 0; i<n; i++){
                matrix[i][0] = 1;
            }
        }
        if(r){
            for(int i = 0; i<m; i++){
                matrix[0][i] = 1;
            }
        }
    }
};