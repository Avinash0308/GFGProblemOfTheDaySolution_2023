#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        // code here
        int low = 0, high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid] < 1) low = mid+1;
            else high = mid-1;
        }
        return (low==n)?-1:low;
    }
};