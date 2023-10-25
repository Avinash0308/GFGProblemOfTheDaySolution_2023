#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        vector<int> v(W+1);
        for(int i = 1; i<=W; i++){
            for(int j = 0; j<N; j++){
                if(i>=wt[j]){
                    v[i] = max(v[i],v[i-wt[j]] + val[j]);
                }
            }
        }
        return v[W];
    }
};