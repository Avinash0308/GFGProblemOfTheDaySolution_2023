#include<bits/stdc++.h>
using namespace std;
class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        // code here
        int upper = 0, lower = 0;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(i>=j) lower += matrix[i][j];
                if(j>=i) upper += matrix[i][j];
            }
        }
        return {upper,lower};
    }
};