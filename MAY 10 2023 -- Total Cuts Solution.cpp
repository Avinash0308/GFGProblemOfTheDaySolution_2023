
class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
        // Code her
        vector<int> v(N);
        int maxy = 0;
        for(int i = 0; i<N; i++){
            maxy = max(maxy,A[i]);
            v[i] = maxy;
        }
        int count = 0;
        int miny = INT_MAX;
        for(int i = N-1; i>0; i--){
            miny = min(miny,A[i]);
            if(miny + v[i-1] >= K){
                count++;
            }
        }
        return count;
    }
};
