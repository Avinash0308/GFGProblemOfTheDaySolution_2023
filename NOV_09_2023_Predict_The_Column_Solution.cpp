#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        
        // Your code here
        int maxy = 0, ans = -1;
        for(int i = 0; i<N; i++){
            int zero = 0;
            for(int j = 0; j<N; j++){
                if(!arr[j][i]) zero++;
            }
            if(zero > maxy){
                maxy = zero;
                ans = i;
            }
        }
        return ans;
        
    }
};