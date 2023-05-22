
class Solution {
    public:
    int solve(int N, vector<int> p){
        int ans = 0;
        vector<int> v(N);
        for(int i = 1; i<N; i++){
            if(!v[p[i]] && p[i]){
                ans++;
                v[p[i]] = 1;
            }
        }
        return ans;
    }
};
