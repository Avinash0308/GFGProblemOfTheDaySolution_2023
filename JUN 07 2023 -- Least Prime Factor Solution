class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
        // code here
        vector<int> v(n+1);
        v[1] = 1;
        for(int i = 2; i<=n;i++){
            if(!v[i]){
                v[i] = i;
                for(int j = i*i; j<=n; j+=i){
                    if(!v[j]){
                        v[j] = i;
                    }
                }
            }
        }
        return v;
    }
};
