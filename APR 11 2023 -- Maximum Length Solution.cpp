class Solution {
public:
    int solve(int a, int b, int c) {
        return ((a+b+1)*2 >= c && (a+c+1)*2 >= b && (b+c+1)*2 >= a)?a+b+c:-1;
    }
};
