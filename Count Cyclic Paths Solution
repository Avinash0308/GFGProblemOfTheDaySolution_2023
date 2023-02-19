class Solution{   
public:
    int countPaths(int N){
        long long int mod = 1e9+7;
        long long int val = 0;
        for(int i = 1; i<N; i++){
            if(i%2){
                val = (((val+1)%mod)*3)%mod;
            }
            else{
                val = (((val-1)%mod)*3)%mod;
            }
        }
        return val;
    }
};
