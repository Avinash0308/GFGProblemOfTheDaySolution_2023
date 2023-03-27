class Solution{
    public:
    Shop shop;
    Solution(Shop s)
    {
        this->shop = s;
    }
    long long find (long  n, long k){
        if(k == 0) return 0;
        long long ans = 0;
        long long  val1 = 0 , val2 = n-1;
        long long mid = -1;
        long long val3;
        while(val1<=val2){
            val3 = (val1+val2)/2;
            mid = shop.get(val3);
            if(mid == k){
                k = 0;
                ans++;
                return ans;
            }
            else if(mid < k){
                val1 = val3+1;
            }
            else{
                val2 = val3-1;
            }
        }
        if(mid == -1) return 0;
        if(mid > k && val3 > 0){
            int cur = shop.get(val3-1);
            ans += k/cur;
            k -= (k/cur)*cur;
        }
        else if(mid > k && val3 == 0) return 0;
        else if(mid < k){
            ans += k/mid;
            k -= (k/mid)*mid;
        }
        return ans + find(val3,k);
    }

};
