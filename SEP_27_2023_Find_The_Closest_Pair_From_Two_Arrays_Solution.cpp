#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        //code here
        int val = INT_MAX;
        vector<int> ans(2);
        int i = 0, j = m-1;
        while(i<n && j>=0){
            int sum = arr[i] + brr[j];
            if(abs(sum-x) < val){
                val = abs(sum-x);
                ans[0] = arr[i];
                ans[1] = brr[j];
            }
            if(sum == x) break;
            if(sum < x){
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};