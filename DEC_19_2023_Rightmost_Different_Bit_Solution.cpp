#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        if(m == n) return -1;
        for(int i = 0; i<32; i++){
            if(((1<<i)&m) == ((1<<i)&n)) continue;
            return i+1;
        }
    }
};