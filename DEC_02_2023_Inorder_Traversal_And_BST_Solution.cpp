#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int isRepresentingBST(int arr[], int N)
    {
        // code here
        for(int i = 1; i<N; i++){
            if(arr[i] <= arr[i-1]) return 0;
        }
        return 1;
    }
};