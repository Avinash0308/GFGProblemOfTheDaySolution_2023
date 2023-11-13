#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string X, string Y, int n, int m)
    {
        //code here
        vector<int> prev(m+1);
        vector<int> cur(m+1);
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(X[i] == Y[j]){
                    cur[j+1] = prev[j] + 1;
                }
                else{
                    cur[j+1] = max(prev[j+1],cur[j]);
                }
            }
            prev = cur;
        }
        return m + n - prev[m];
    }
};