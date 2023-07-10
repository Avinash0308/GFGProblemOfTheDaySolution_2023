class Solution{
    public:
    /*You are required to complete this method */
    int findMaxDiff(int A[], int n)
    {
      //Your code here
      stack<int> s; // we will use stack data structure to perform specific operation ;
      vector<int> left(n) , right(n); // left vector will store smaller element to left and right vector will store smaller element to right to given index;
      for(int i = 0; i<n ; i++){ // first traversing array from left to get left vector;
          while(!s.empty() && s.top()>=A[i]){ // while stack is not empty and the top element of stack is greater than or equal to current element we will pop the stack elements;
              s.pop();
          }
          if(!s.empty()){ // if stack is not empty we will store its top value to left vector else we will store 0 which is already present in left vector;
              left[i] = s.top();
          }
          s.push(A[i]); // at last of each iteration we will insert the current element in the stack;
      }
      while(!s.empty()){
          s.pop(); // now empty the stack for next operation;
      }
      for(int i = n-1; i>=0 ; i--){ // now we will be traversing the vector from right to get the values of right vector;
          while(!s.empty() && s.top()>=A[i]){ // again the same operation will be applied;
              s.pop();
          }
          if(!s.empty()){
              right[i] = s.top();
          }
          s.push(A[i]);
      }
      int maxy = 0;
      for(int i = 0; i<n ; i++){ // at last we will compare the absolute difference of right and left element at each index and will store the max of it;
          maxy = max(maxy,abs(left[i]-right[i]));
      }
      return maxy; // returning the max of element found;
    }
};
