class Solution {
  public:
    string removePair(string s) {
        // code here
        stack<char> st; // stack to store the elements on fifo order;
        for(int i = 0; i<s.size(); i++){ // traversing the string s;
            if(st.empty() || st.top() != s[i]){ // if stack is empty or the top element of stack is not equal to current element we will push the element in stack;
                st.push(s[i]);
            }
            else{
                st.pop(); // else if top most element is equal to current element pop it from stack;
            }
        }
        string ans; // ans string will store the answer string;
        while(!st.empty()){ // pushing element from stack to string;
            ans.push_back(st.top());
            st.pop();
        }
        if(ans.size() == 0){ // if stack is empty and so the string we will return "-1";
            return "-1";
        }
        else{
            reverse(ans.begin(),ans.end()); // else reverse the ans string because the characters are pushed in opposite order in the string;
            return ans; // return the answer array;
        }
    }
};
