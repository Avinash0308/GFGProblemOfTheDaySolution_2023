#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        unordered_map<int,int> m;
        for(int i = 0; i<n; i++){
            m[arr[i]]++;
        }
        int t = (n+k)/k;
        int count = 0;
        for(auto i:m){
            if(i.second >= t) count++;
        }
        return count;
    }
};