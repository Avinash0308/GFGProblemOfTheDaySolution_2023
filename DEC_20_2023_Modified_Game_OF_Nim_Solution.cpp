#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int findWinner(int n, int A[]){
        // code here
        int x = 0;
        for(int i = 0; i<n; i++){
            x = A[i] xor x;
        }
        if(!x || n%2 == 0) return 1;
        else return 2;
    }
};