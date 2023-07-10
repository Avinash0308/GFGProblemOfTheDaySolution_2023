class Solution{
public:
    long long findNumber(long long N){
        long long val = 1;
        long long ans = 0;
        while(N>0){
            N--;
            ans += (2*(N%5) + 1)*val;
            N/=5;
            val*=10;
        }
        return ans;
    }
};
