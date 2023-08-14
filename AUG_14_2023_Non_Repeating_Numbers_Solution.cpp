#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        int xo = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            xo ^= nums[i];
        }
        for(int i = 0; i<31; i++){
            if(xo & (1<<i)){
                int one = 0, two = 0;
                for(int j = 0; j<n; j++){
                    if(nums[j] & (1<<i)) one ^= nums[j];
                    else two ^= nums[j];
                }
                return {min(one,two),max(one,two)};
            }
        }
        return {0,0};
    }
};