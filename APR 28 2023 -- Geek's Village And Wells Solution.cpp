class Solution{
public:
    vector<vector<int>> chefAndWells(int n,int m,vector<vector<char>> &c){
        // Code here
        vector<vector<int>> ans(n,vector<int> (m,INT_MAX));
        queue<pair<int,int>> q;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m ; j++){
                if(c[i][j] == 'W'){
                    ans[i][j] = 0; 
                    q.push({i,j});
                }
                if(c[i][j] == 'N'){
                    ans[i][j] = 0;
                }
            }
        }
        while(!q.empty()){
            int i = q.front().first , j = q.front().second;
            q.pop();
            if(i-1>=0 && (c[i-1][j] == 'H' || c[i-1][j] == '.') && ans[i-1][j] > ans[i][j]+2){
                ans[i-1][j] = ans[i][j]+2;
                q.push({i-1,j});
            }
            if(i+1<n && (c[i+1][j] == 'H' || c[i+1][j] == '.') && ans[i+1][j] > ans[i][j]+2){
                ans[i+1][j] = ans[i][j]+2;
                q.push({i+1,j});
            }
            if(j-1>=0 && (c[i][j-1] == 'H' || c[i][j-1] == '.') && ans[i][j-1] > ans[i][j]+2){
                ans[i][j-1] = ans[i][j]+2;
                q.push({i,j-1});
            }
            if(j+1<m && (c[i][j+1] == 'H' || c[i][j+1] == '.') && ans[i][j+1] > ans[i][j]+2){
                ans[i][j+1] = ans[i][j]+2;
                q.push({i,j+1});
            }
        }
        for(int i = 0; i<n;  i++){
            for(int j = 0; j<m ; j++){
                if(ans[i][j] == INT_MAX) ans[i][j] = -1;
                if(c[i][j] == '.') ans[i][j] = 0;
            }
        }
        return ans;
    }
};
