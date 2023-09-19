#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
        for(int i = 0; i<31;i ++){
            if(n & (1<<i)) return i+1;
        }
        return 0;
    }
};