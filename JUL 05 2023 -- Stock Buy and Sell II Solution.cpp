class Solution {
  public:
    int stockBuyAndSell(int n, vector<int> &prices) {
        int ans = 0;
        int cur = INT_MAX;
        for(int i = 0; i<prices.size(); i++){
            ans += max(0,prices[i]-cur);
            cur = prices[i];
        }
        return ans;
    }
};
