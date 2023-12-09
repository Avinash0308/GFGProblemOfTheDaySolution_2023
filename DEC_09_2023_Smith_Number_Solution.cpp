#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool prime(int n){
        if(n <= 3) return 1;
        for(int i = 2; i*i<=n; i++){
            if(n%i == 0) return 0;
        }
        return 1;
    }
    int smithNum(int n) {
        // code here
        if(prime(n)) return 0;
        int dig_sum = 0;
        int val = n;
        while(val){
            dig_sum += val%10;
            val/=10;
        }
        int sum = 0;
        val = n;
        for(int i = 2; i<=val; i++){
            int sum_dig = 0;
            int vall = i;
            while(vall){
                sum_dig += vall%10;
                vall/=10;
            }
            if(prime(val)){
                while(val){
                    sum += val%10;
                    val/=10;
                }
                break;
            }
            while(val%i == 0){
                sum += sum_dig;
                val/=i;
            }
        }
        return sum == dig_sum;
    }
};