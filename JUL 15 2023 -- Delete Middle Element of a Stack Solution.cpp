#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to delete middle element of a stack.
    void del(stack<int> &s, int &target, int cur){
        if(cur == target){
            s.pop();
            return;
        }
        int val = s.top();
        s.pop();
        del(s,target,cur-1);
        s.push(val);
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        int target = (sizeOfStack+1)/2;
        del(s,target,sizeOfStack);
        return;
    }
};