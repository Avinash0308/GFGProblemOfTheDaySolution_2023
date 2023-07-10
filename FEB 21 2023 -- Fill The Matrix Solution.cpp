class Solution{   
public:
    int minIteration(int N, int M, int x, int y){
        return max({x+y-2,N-x+M-y,x-1+M-y,N-x+y-1});
    }
};
