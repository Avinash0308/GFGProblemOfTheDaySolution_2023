class Solution {
  public:
    int solve(int a, int b) {
        // code here
        if(a == b)return 0; // if both the nubmers are already equal i.e. we need not to perform any operation on them and will return 0;
        if(a == (a&b) || b == (a&b)) return 1; // else if there bitwise and is equal to qither a or b we will return 1 as we can make them equal in one operation;
        return 2; // else it is for sure that we can make two numbers equal in 2 operation let's see how - consider two different numbers a and b which are different so to make them equal , in operation 1 we will find a & 0 which is obviously 0 and similarly b & 0 is also 0 thus in two operation we made the numbers equal;
    }
};
