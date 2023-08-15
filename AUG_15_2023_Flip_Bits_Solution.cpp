#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        // Your code goes here
        int zero = 0, one = 0, maxy = 0;
        for(int i = 0; i<n; i++){
            if(a[i] == 0){
                zero++;
                maxy = max(maxy,zero);
            }
            else{
                one++;
                zero--;
            }
            zero = max(zero,0);
        }
        return one + maxy;
    }
};