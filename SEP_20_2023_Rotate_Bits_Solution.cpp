#include<bits/stdc++.h>
using namespace std;
class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            //code here.
            d%=16;
            return {((n<<d)|(n>>(16-d)))&((1<<16)-1),((n>>d)|(n<<(16-d)))&((1<<16)-1)};
        }
};