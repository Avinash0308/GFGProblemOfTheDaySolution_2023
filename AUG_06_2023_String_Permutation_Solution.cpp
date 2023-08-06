#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //Complete this function
    void solve(string &s, int n, int ind, vector<string> &ans){
        if(ind == n-1){
            ans.push_back(s);
            return;
        }
        for(int i = ind; i<n; i++){
            swap(s[ind],s[i]);
            solve(s,n,ind+1,ans);
            swap(s[ind],s[i]);
        }
    }
    vector<string> permutation(string S)
    {
        vector<string> ans;
        int n = S.size();
        solve(S,n,0,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};