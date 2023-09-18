#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
         if (n == 0)
        return false;
 
    return (ceil(log2(n)) == floor(log2(n)));
        
    }
};