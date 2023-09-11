#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool isLucky(int n) {
        // code here
        int cur = 2;
        while(cur <= n){
            if(n%cur){
                n = n - (n/cur);
                cur++;
            }
            else return false;
        }
        return true;
    }
};