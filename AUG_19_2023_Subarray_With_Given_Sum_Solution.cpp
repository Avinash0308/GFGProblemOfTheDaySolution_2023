#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code herefd
        int start = 0;
        long long cur = 0;
        for(int i = 0; i<n; i++){
            cur += arr[i];
            if(cur == s) return {start+1,i+1};
            else if(cur > s){
                while(cur > s){
                    cur -= arr[start];
                    start++;
                }
                if(cur == s && start<=i) return {start+1,i+1};
            }
        }
        return {-1};
    }
};