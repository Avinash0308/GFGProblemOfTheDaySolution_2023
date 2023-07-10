class Solution{
  public:
    int cutRod(int price[], int n) {
        vector<int> val(n);
        for(int i = 0; i<n; i++){
            int cur_max_val = price[i];
            int low_ind = 0, high_ind = i-1;
            while(low_ind <= high_ind){
                cur_max_val = max(cur_max_val,val[low_ind]+val[high_ind]);
                low_ind++;
                high_ind--;
            }
            val[i] = cur_max_val;
        }
        return val[n-1];
    }
};
