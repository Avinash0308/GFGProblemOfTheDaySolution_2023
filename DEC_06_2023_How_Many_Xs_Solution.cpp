#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countX(int L, int R, int X) {
        // code here
        int ans = 0;
        for(int i = L+1; i<R; i++){
            int val = i;
            while(val){
                if(val%10 == X) ans++;
                val/=10;
            }
        }
        return ans;
    }
};