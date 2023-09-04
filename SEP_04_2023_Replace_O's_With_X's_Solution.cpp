#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> &mat)
    {
        vector<vector<int>> direction(4,vector<int>(2));
        direction = {{0,1},{0,-1},{1,0},{-1,0}};
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m ;j++){
                if(mat[i][j] == 'O' && (i == 0 || i == n-1 || j == 0 || j == m-1)){
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    while(!q.empty()){
                        pair<int,int> cur = q.front();
                        q.pop();
                        int x = cur.first, y = cur.second;
                        if(x<0 || x>=n || y<0 || y>=m) continue;
                        if(mat[x][y] == 'O'){
                            mat[x][y] = 'A';
                            for(int t = 0; t<4; t++){
                                q.push({x + direction[t][0],y + direction[t][1]});
                            }
                        }
                    }
                }
            }
        }
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(mat[i][j] == 'A') mat[i][j] = 'O';
                else if(mat[i][j] == 'O') mat[i][j] = 'X';
            }
        }
        return mat;
    }
};
int main(){
    return 0;
}