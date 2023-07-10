class Solution{
public:
    int minimumNumber(int n,vector<int> &arr){
        int g = arr[0];
        for(int i = 1; i<n; i++){
            g = __gcd(g,arr[i]);
        }
        return g;
    }
};
