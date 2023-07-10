class Solution{
public:
    vector<int> optimalArray(int n,vector<int> &a){
        // Code here
        vector<int> v(n);
        int cur = 0;
        int cur1 = 0;
        int ind = -1;
        for(int i = 0; i<n ; i++){
            cur += a[i];
            int avg = a[(i+1)/2];
            while(a[ind+1] < avg){
                ind++;
                cur1 += a[ind];
            }
            int ans = 0;
            ans += (ind+1)*avg - cur1;
            ans += cur - cur1 - (i-ind)*avg ;
            v[i] = ans;
        }
        return v;
    }
};
