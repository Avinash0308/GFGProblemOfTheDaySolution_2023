#include<bits/stdc++.h>
using namespace std;
class Solution{   
public:
    int minimumStep(int n){
        //complete the function here
        int ans = 0;
        while(n >= 3){
            if(n%3){
                ans += n%3;
                n -= n%3;
            }
            else{
                ans++;
                n/=3;
            }
        }
        if(n == 2) ans++;
        return ans;
    }
};