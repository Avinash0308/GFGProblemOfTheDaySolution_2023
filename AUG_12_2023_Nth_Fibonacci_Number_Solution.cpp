#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int nthFibonacci(int n){
        int a = 1, b = 1, mod = 1e9+7;
        while(n-- > 2){
            a = (a+b)%mod;
            swap(a,b);
        }
        return b;
    }
};