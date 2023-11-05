#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        unordered_map<int,int> m;
        int n = nums.size();
        for(int i = 0; i<n;i ++){
            m[nums[i]]++;
        }
        vector<int> ans(k);
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> p;
        for(auto i:m){
            int val = i.first, count = i.second;
            while(p.size() >= k && p.top().first < count){
                p.pop();
            }
            while(p.size() >= k && p.top().first == count && p.top().second < val){
                p.pop();
            }
            if(p.size() < k) p.push({count,val});
        }
        int i = 0;
        while(!p.empty()){
            ans[i++] = p.top().second;
            p.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};