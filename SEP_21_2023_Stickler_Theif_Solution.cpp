#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        int a = 0, b = 0;
        for(int i = n-1; i>=0; i--){
            int cur = arr[i] + b;
            b = a;
            a = max(a,cur);
        }
        return a;
    }
};