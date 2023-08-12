#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       vector<int> dp;
       dp.push_back(a[0]);
       int len = 1;
       for(int i =0; i<n; i++){
           if(dp.back() < a[i]){
               dp.push_back(a[i]);
               len++;
           }
           else{
               int ind = lower_bound(dp.begin(),dp.end(),a[i]) - dp.begin();
               dp[ind] = a[i];
           }
       }
       return len;
    }
};