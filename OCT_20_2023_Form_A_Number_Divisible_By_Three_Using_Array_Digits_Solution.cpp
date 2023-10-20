#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int isPossible(int N, int arr[]) {
        // code here
        int sum = 0;
        for(int i = 0; i<N; i++){
            while(arr[i]){
                sum += arr[i]%10;
                arr[i]/=10;
            }
        }
        return !(sum%3);
    }
};