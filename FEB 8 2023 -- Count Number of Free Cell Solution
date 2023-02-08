class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
        vector<int> col(n);
        vector<int> row(n);
        vector<long long int> v(k);
        long long int zero = n*n;
        int r = 0 , c = 0;
        for(int i = 0; i<k ; i++){
            if(col[arr[i][1] - 1] == 0){
                col[arr[i][1] - 1] = 1;
                c++;
                zero -= (n-r);
            }
            if(row[arr[i][0] - 1] == 0){
                row[arr[i][0] - 1] = 1;
                r++;
                zero -= (n-c);
            }
            v[i] = zero;
        }
        return v;
  }
};
