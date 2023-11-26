#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void solve(int cur, int N, vector<int> &ans, int val){
        ans.push_back(cur);
        if(cur == N && val == 5) return;
        if(cur>0){
            solve(cur+val,N,ans,val);
        }
        else{
            solve(cur+5,N,ans,5);
        }
    }
    vector<int> pattern(int N){
        if(N<=0) return {N};
        // code here
        vector<int> ans;
        solve(N,N,ans,-5);
        return ans;
    }
};