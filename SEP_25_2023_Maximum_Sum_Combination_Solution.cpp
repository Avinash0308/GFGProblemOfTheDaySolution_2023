#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> maxCombinations(int N, int K, vector<int> &A, vector<int> &B) {
        // code here
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        int n = A.size()-1;
        int tra = n;
        vector<int> ans(K);
        priority_queue<vector<int>> p;
        p.push({A[n]+B[n],n,n});
        int ind = 0;
        while(ind<K){
            vector<int> cur = p.top();
            p.pop();
            int i = cur[1], j = cur[2], val = cur[0];
            if(i == tra && tra){
                tra--;
                p.push({B[tra]+A[n],tra,n});
            }
            int comp = (p.size())?p.top()[0]:0;
            while(j>=0 && A[j] + B[i]>=comp && ind<K){
                ans[ind] = A[j] + B[i];
                j--;
                ind++;
            }
            if(j>=0)p.push({A[j] + B[i],i,j});
        }
        return ans;
    }
};