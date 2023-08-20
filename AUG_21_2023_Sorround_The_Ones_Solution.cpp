#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int possible(vector<vector<int>> &matrix, int n, int m, int x, int y){
        if(x < 0 || x>=n || y<0 || y>=m || matrix[x][y]) return 0;
        else return 1;
    }
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int n = matrix.size(), m = matrix[0].size();
        int ans = 0;
        vector<vector<int>> dir;
        for(int i = -1; i<=1; i++){
            for(int j = -1; j<=1; j++){
                if(!i && !j) continue;
                dir.push_back({i,j});
            }
        }
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(matrix[i][j]){
                    int count = 0;
                    for(int k = 0; k<8; k++){
                        count += possible(matrix,n,m,i+dir[k][0],j+dir[k][1]);
                    }
                    if(count && !(count%2)) ans++;
                }
            }
        }
        return ans;
    }
};