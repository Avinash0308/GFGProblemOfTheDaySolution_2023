#include<bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    int minOperation(int n)
    {
        //code here.
        if(n == 0) return 0;
        if(n%2) return minOperation(n-1) + 1;
        return minOperation(n/2) + 1;
    }
};