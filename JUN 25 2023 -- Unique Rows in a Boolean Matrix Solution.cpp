class Solution
{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        //Your code here
        vector<vector<int>> ans;
        map<vector<int> , int> m;
        for(int i = 0; i<row; i++){
            vector<int> cur;
            for(int j = 0; j<col; j++){
                cur.push_back(M[i][j]);
            }
            if(m.find(cur) == m.end()){
                ans.push_back(cur);
            }
            m[cur] = 1;
        }
        return ans;
    }
};
