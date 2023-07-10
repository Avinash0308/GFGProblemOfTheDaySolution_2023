class Solution{
    int mod = 1e9+7;
    public:
    long long int solve(int i, long long int rem_sum, vector<long long int> &pow_val, vector<vector<long long int>> &dp){
        if(i>=pow_val.size()){
            if(rem_sum == 0) return 1;
            else return 0;
        }
        if(dp[i][rem_sum] != -1) return dp[i][rem_sum];
        long long int ans = 0;
        if(rem_sum-pow_val[i] >= 0){
            ans = solve(i+1,rem_sum-pow_val[i],pow_val,dp);
        }
        return dp[i][rem_sum] = (ans + solve(i+1,rem_sum,pow_val,dp))%mod;
    }
    int numOfWays(int n, int power)
    {
        // code here
        vector<long long int> pow_val;
        long long int cur_base_pow_val = 1;
        for(int i = 2; cur_base_pow_val <= n; i++){
            pow_val.push_back(cur_base_pow_val);
            cur_base_pow_val = pow(i,power);
            cur_base_pow_val %= mod;
        }
        vector<vector<long long int>> dp(pow_val.size(),vector<long long int> (n+1,-1));
        return solve(0,n,pow_val,dp) % mod;
    }
};
