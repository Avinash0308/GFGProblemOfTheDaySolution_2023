class Solution {
  public:
    bool makeChanges(int N, int k, int target, vector<int> &coins) {
        sort(coins.begin(),coins.end());
        vector<vector<int>> v(k+1,vector<int>(target+1,0));
        for(int i = 0; i<N; i++){
            if(coins[i] <= target){
                v[1][coins[i]] = 1;
            }
            else break;
        }
        for(int i = 2; i<=target; i++){
            int j = 0; 
            while(j<N && coins[j]<i){
                for(int m = 1; m<k; m++){
                    if(v[m][i-coins[j]]){
                        v[m+1][i] = 1;
                    }
                }
                j++;
            }
        }
        return v[k][target];
    }
};
