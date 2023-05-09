class Solution {
    long long int mod = 1e9+7;
  public:
    void multi(vector<vector<long long int>> &v, vector<vector<long long int>> &m){
        vector<vector<long long int>> res(3,vector<long long int> (3,0));
        for(int i = 0; i<3; i++){
            for(int j = 0; j<3; j++){
                for(int k = 0; k<3; k++){
                    long long int val = (v[i][k]*m[k][j])%mod;
                    res[i][j] = (res[i][j]+val)%mod;
                }
            }
        }
        v = res;
    }
    void solve(long long int n, vector<vector<long long int>> &v){
        vector<vector<long long int>> m = {{1,1,0},{1,0,0},{1,0,0}};
        if(n == 1){
            return;
        }
        solve(n/2,v);
        multi(v,v);
        if(n%2){
            multi(v,m);
        }
        return;
    }
    int countStrings(long long int N) {
        vector<vector<long long int>> v;
        v.push_back({1,1,0});
        v.push_back({1,0,0});
        v.push_back({1,0,0});
        solve(N,v);
        return (v[0][0] + v[0][1])%mod;
    }
};
