#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long int minOperations(int N) {
        long long int ele = N/2;
        if(N%2){
            return ele*(ele+1);
        }
        else{
            return ele*ele;
        }
    }
};
