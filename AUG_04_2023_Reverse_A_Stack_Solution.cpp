#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void Reverse(stack<int> &st){
        queue<int> q;
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        while(!q.empty()){
            st.push(q.front());
            q.pop();
        }
    }
};