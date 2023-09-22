#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int low(int arr[], int n, int x){
        int low = 0, high = n-1;
        int mid;
        while(low<=high){
            mid = (low+high)/2;
            if(arr[mid]>=x){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        if(low<n && arr[low] == x) return low;
        else return -1;
    }
    int high(int arr[], int n, int x){
        int low = 0, high = n-1;
        int mid;
        while(low<=high){
            mid = (low+high)/2;
            if(arr[mid] <= x){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        if(high >= 0 && arr[high] == x) return high;
        else return -1;
    }
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int start = low(arr,n,x);
        if(start == -1) return {-1,-1};
        int end = high(arr,n,x);
        return {start,end};
    }

};