#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        unordered_map<int,int> m;
        for(int i = 0; i<n; i++){
            m[arr[i]]++;
        }
        unordered_map<int,int> count;
        for(auto it:m){
            count[it.second]++;
            if(count[it.second]>1) return false;
        }
        return true;
    }
};