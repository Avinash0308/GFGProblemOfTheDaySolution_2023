#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_map<int,int> m;
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum += arr[i];
            if(!sum) return true;
            if(m.count(sum) != 0) return true;
            m[sum]++;
        }
        return false;
    }
};