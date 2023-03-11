class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int N) {
        //code here
        int count = 0  , no = 0;
        for(int i = 0; i<N; i++){
            int low = 0 , high = N-1;
            while(low <= high){
                int mid = (low+high)/2;
                if(mat[i][mid] == 1){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            if(N-low > count){
                count = N-low;
                no =i;
            }
        }
        return {no,count};
    }
};
