#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        long long int rear = 0;
        for(int i = 0; i<n; i++){
            rear += a[i];
        }
        long long int front = 0;
        for(int i = 0; i<n; i++){
            rear -= a[i];
            if(rear == front) return i+1;
            front += a[i];
        }
        return -1;
    }

};